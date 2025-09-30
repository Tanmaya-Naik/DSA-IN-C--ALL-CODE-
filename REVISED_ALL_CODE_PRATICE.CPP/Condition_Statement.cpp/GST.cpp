#include <iostream>
using namespace std;
int main(){
    int Rice,meat,dal;
    int Total;
    cout<<"Enter the price of Rice "<<endl;
    cout<<"Enter the price of meat "<<endl;
    cout<<"Enter the price of dal "<<endl;
    cin>>Rice;
    cin>>meat;
    cin>>dal;
    Total=Rice+meat+dal;
    int FInal=Total+0.18*Total;
    cout<<"Total cost after including gst is "<<FInal;
    return 0;
}