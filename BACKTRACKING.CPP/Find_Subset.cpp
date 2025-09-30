#include <iostream>
#include <string>
// #include <vector>
using namespace std;
void PrintSubsets(string str,string Subset){
    if (str.size()==0){
        cout<<Subset<<endl;
        return;
    }
    char ch=str[0];
    //if choose yes
    PrintSubsets(str.substr(1,str.size()-1),Subset+ch);
    //if choose no
    PrintSubsets(str.substr(1,str.size()-1),Subset);
    
}
int main(){
    string str="abc";
    string Subset="";
    PrintSubsets(str,Subset);
    return 0;
}