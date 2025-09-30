#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year "<<endl;
    cin>>year;
    if (year%4==0||year%400==0)
    {
        cout<<"The enter year is a leap year";
        
    }
    else
      cout<<"The enter year is not a leap year";
    return 0;
}