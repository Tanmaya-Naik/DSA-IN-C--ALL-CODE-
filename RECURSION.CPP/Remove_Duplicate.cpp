// #include <iostream>
// #include <string>
// using namespace std;

// void RemoveDuplicate(string str,string ans,int i,int map[26]){
//      if (i==str.size())
//      {
//         cout<<"Ans:"<<ans;
//         return;
//      }
//      char ch=str[i];
//      int mapidx=(int)(ch-'a');
//      if (map[mapidx]==true)
//      {
//         RemoveDuplicate(str,ans,i+1,map);
//      }
//      else{
//         map[mapidx]=true;
//         RemoveDuplicate(str,ans+str[i],i+1,map);
//      }
     
// }
// int main(){
//     string str="taannmmayya";
//     string ans="";
//     int map[26]={false};
//     RemoveDuplicate(str,ans,0,map);
//     return 0;
// }

//REMOVE DUPLICATE WITHOUT USING I
#include <iostream>
#include <string>
using namespace std;
void RemoveDuplicate(string str,string ans,int map[26]){
     if (str.size()==0)
     {
        cout<<ans;
        return;
     }
     int n=str.size();
     char ch=str[n-1];
     int mapidx=(int)(str[n-1]-'a');
     str=str.substr(0,n-1);
     if (map[mapidx]==true)
     {
        RemoveDuplicate(str,ans,map);
     }
     else{
        map[mapidx]=true;
        RemoveDuplicate(str,ch+ans,map);
     }
}
int main(){
    string str="taannmmayya";
    string ans="";
    int map[26]={false};
    RemoveDuplicate(str,ans,map);
    return 0;
}
//IT IS CORRECT