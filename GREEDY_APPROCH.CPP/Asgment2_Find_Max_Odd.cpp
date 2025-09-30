// Question 2 : Largest Odd Number in String
// You are given a string num, representing a large integer. Return the largest-valued
// odd integer (as a string) that is a non-empty substring of num, or an empty string "" if
// no odd integer exists.
// A substring is a contiguous sequence of characters within a string. 
// Examples :
// Input: num = "52"
// Output: "5"
// Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only
// odd number.

#include <iostream>
#include <string>
using namespace std;
string LargestOdd(string &str){
    for (int i = str.length()-1; i >=0; i--)//check from the right side and if any odd number encounter form the left side then from start of the string to the odd number position print the string
    {
        if ((str[i]-'0')%2==1)//It is a odd number so start form first to this num
        {
            return str.substr(0,i+1);
        }
        
    }
     return ""; // No odd number found
}
int main(){
    string str="56789";
    cout<<LargestOdd(str)<<endl;
    return 0;
}

 