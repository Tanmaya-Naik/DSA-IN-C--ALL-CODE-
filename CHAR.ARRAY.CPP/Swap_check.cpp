#include <iostream>
using namespace std;
int main(){
    string str1="gandu";
    string str2="uandg";
    int i=str1.length();
    int j=str2.length();
    if (i==j)
    {
        swap(str2[0],str2[j-1]);
    }
    if (str1==str2)
    {
        cout<<true;
        
    }
    else 
    cout<<false;
    return 0;

}