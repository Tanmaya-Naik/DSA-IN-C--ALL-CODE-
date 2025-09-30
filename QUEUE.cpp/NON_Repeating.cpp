#include <iostream>
#include <queue>

using namespace std;

void Non_REpeating(string str){
    queue<char> Q;
    int freq[26]={0};
    for (int i = 0; i < str.size(); i++)
    {
        char ch=str[i];
        freq[ch-'a']++;//This is for knowing the position of that character in the frequency array
        Q.push(ch);

    while (!Q.empty() && freq[Q.front()-'a'] > 1)
    {
        Q.pop();
    }
    
    if (Q.empty())
    {
        cout<<"-1\n";
    }
    else{
        cout<<Q.front()<<endl;
    }
 } 
    
}
int main(){
    string str="aabccxb";
    cout<<"The non Repeting characters are"<<endl;
    Non_REpeating(str);
    return 0;
}