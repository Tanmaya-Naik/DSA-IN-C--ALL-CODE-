#include <iostream>
#include <string>
using namespace std;

class user {
       int id;
       string password;
public:
       string username;
       user(int id){          //Parameterized constructor
          this->id=id;
       }

       //getter
       string getpassword(){
        return password;
       }
       
       //setter
       void setpassword(string password){
        this->password=password;
       }
};
int main(){
    user User1(149);
    User1.username="Tanmaya";
    User1.setpassword("tanubaby");


   cout<<"Username is:"<<User1.username<<endl;
   cout<<"Password:"<<User1.getpassword()<<endl;
   return 0;
}