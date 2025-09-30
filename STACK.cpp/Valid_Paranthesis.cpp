#include <iostream>
#include <stack>
#include <string>
using namespace std;

 bool isValid(string str){
    stack<char> s;
    for (int i = 0; i <str.size() ; i++)
    {
        char ch=str[i];
        if (ch== '(' || ch== '[' || ch=='{')
        {
            s.push(ch);
        }
        else //Corner case if stack is empty
        {
            if (s.empty())
            {
                return false;
            }
            
            //check Matching
            char Top=s.top();
            if ( (Top=='(' && ch==')' )||
                (Top=='[' && ch==']' )||
                (Top=='{' && ch=='}' ))
            {
                s.pop();
            }
            else{
                return false;
            }
            
        }
        
      
    //  
      //we can write this if statement in one line by return s.empty();
    }
     if (s.empty())
      {
         return true;
      }
    // return s.empty();
    
 }
int main(){
    string str1="([{}]){}()";//True=o/p=1
    string str2="([{}])())";//false=0

    cout<<isValid(str1)<<endl;
    cout<<isValid(str2)<<endl;

    return 0;
}