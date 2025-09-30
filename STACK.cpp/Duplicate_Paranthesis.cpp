#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool IsDuplicate(string str){
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        char ch=str[i];
        if (ch!=')')
        {
            s.push(ch);
        }
        else{
            if ( s.top()=='(')
            {
                return true;
            }


           while (s.top()!='(')
           {
            s.pop();
           }
           s.pop();
        }
        
    }
    return false;
    
}
int main(){
    string str1="((a+b))";
    string str2="((a+b)+c)";
    cout<<IsDuplicate(str1)<<endl;
    cout<<IsDuplicate(str2)<<endl;
    return 0;
}


















// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// /**
//  * Function to check if a given expression contains duplicate parentheses.
//  * Duplicate parentheses mean there exists an extra set of unnecessary brackets, like "((a+b))".
//  *
//  * @param str The input expression as a string.
//  * @return True if duplicate parentheses are found, otherwise False.
//  */
// bool IsDuplicate(string str) {
//     stack<char> s; // Stack to store characters
    
//     // Iterate through each character of the string
//     for (int i = 0; i < str.size(); i++) {
//         char ch = str[i];
        
//         // If the character is not a closing parenthesis ')', push it onto the stack
//         if (ch != ')') {
//             s.push(ch);
//         } else {
//             // If the top of the stack is an opening bracket '(', it means we have "()" (duplicate)
//             if (s.top() == '(') {
//                 return true; // Duplicate parentheses detected
//             }
            
//             // Otherwise, pop elements until we find an opening bracket '('
//             while (s.top() != '(') {
//                 s.pop(); // Removing characters inside the parentheses
//             }
            
//             s.pop(); // Finally, pop the opening bracket '(' as well
//         }
//     }
    
//     return false; // No duplicate parentheses found
// }

// int main() {
//     string str1 = "((a+b))"; // Contains duplicate parentheses
//     string str2 = "((a+b)+c)"; // No duplicate parentheses
    
//     cout << "Expression: " << str1 << " -> " << (IsDuplicate(str1) ? "Yes" : "No") << endl;
//     cout << "Expression: " << str2 << " -> " << (IsDuplicate(str2) ? "Yes" : "No") << endl;
    
//     return 0;
// }
