#include <iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    complex(int r,int i){
        real=r;
        imaginary=i;
    }
    void showNum(){
    cout<<real<<"+"<<imaginary<<"i"<<endl;
    }

    complex operator-(complex &c2){
        int resReal=this->real-c2.real;
        int resImaginary=this->imaginary-c2.imaginary;
        complex c3(resReal,resImaginary);
        cout<<"result=";
        return c3;
    }
};
int main(){
    complex c1(5,6);
    complex c2(3,5);
    c1.showNum();
    c2.showNum();
    complex c3=c1-c2;
    c3.showNum();
    return 0;
}
