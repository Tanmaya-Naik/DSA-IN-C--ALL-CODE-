#include <iostream>
using namespace std;
class Complex{
    int real;
    int imaginary;
    public:
    Complex(int r,int i){
        real=r;
        imaginary=i;
    }
    void showNum(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }

     Complex operator+(Complex &c2){//returntype complex means that 
                                    //here in this function a object of class complex will be return
        int resultReal=this->real+c2.real;        
        int resultImag=this->imaginary+c2.imaginary; 
        Complex c3(resultReal,resultImag);
        cout<<"result=";
        return c3;
     }
    
};
int main(){
        Complex c1(1,2);
        Complex c2(3,4);
        c1.showNum();
        c2.showNum();

       Complex c3=c1+c2;
       c3.showNum();
       return 0;
    }