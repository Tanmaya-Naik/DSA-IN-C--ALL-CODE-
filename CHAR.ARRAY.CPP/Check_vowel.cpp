#include <iostream>
using namespace std;
int main(){
    string str="tanmayailoveyou";
    int count=0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]=='a'|| str[i]=='e' ||
            str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        {
            count += 1;
        }
        
    }
    cout<<"The number of times lowercase vowel occurs is="<<count<<endl;
    return 0;

}