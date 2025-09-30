#include <iostream>
#include <string>
using namespace std;
class Animal{
    string color;
  public:
    void eat(){
        cout<<"animal eat khekar"<<endl;
    }
    void breath(){
        cout<<"animal also breath"<<endl; 
    }
    
};
class fish:public Animal{
   public:
   int fins;

   void swim(){
    cout<<"swims";
   }
};
int main(){
    fish f1;
    f1.eat();
    f1.breath();
    return 0;
}