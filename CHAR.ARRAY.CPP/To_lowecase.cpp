#include <iostream>
#include <string.h>
using namespace std;
void tolower(char word[],int n){
    
    for (int  i = 0; i < n; i++)
    {
        char ch=word[i];
        if (ch >='A'&& ch<='Z')
        {
            word[i]=ch-'A'+'a';
        }
        else if (ch >='A'&& ch<='Z')
        {
            continue;
        }
        
    }
    cout<<word;

}
int main(){
    char word[]="SHUBHmaya";
    tolower(word,strlen(word));
    return 0;
}