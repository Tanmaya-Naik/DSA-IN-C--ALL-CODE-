#include <iostream>
using namespace std;

class Parent {
    public:
    void call(){
        cout<<"Call Tanmaya";
    }


    virtual void hello (){
        cout<<"Hello Tanmaya From parent"<<endl;;
    }
};
class child: public Parent {
    public:
      void hello(){
        cout<<"Hello Tanmya from child";
      }
};

int main(){
    child c1;
   Parent *ptr;
   ptr=&c1;
   ptr->hello();
   return 0;
}
