#include <iostream>
#include <string>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    Person(string str,int n){
        name=str;
        age=n;
    }
};
class Student:public Person{
    string studentId;
    public:
    Student(string str,int n,string id):Person(str,n){
        studentId=id;
    }
    void showAll(){
        cout<<"Student name="<<this->name<<endl;
        cout<<"Student age="<<this->age<<endl;
        cout<<"Student studentId="<<this->studentId<<endl;
    }
};
int main(){
    Student st1("Shubhmaya",14,"23DCS001");
    st1.showAll();
    return 0;
}