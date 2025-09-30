#include <iostream>
#include <string.h>
using namespace std;
void toUpper(char Word[],int n){
    for (int i = 0; i < n; i++)
    {
        char ch= Word[i];
        if (ch >= 'A' && ch <='Z')
        {
            continue;
        }else if (ch >='a' && ch<='z')
        {
           Word[i]=ch-'a'+'A';
        }
        
        
    }
    cout<<Word;
}
int main(){
    char Word[]="TanuMaya";
    toUpper(Word,strlen(Word));
    
    return 0;

}