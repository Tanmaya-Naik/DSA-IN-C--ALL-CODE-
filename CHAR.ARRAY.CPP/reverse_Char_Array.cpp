#include <iostream>
#include <string.h>
using namespace std;
void reverse(char Word[],int n){
    int st=0,end=n-1;
    while (st < end)
    {
       swap(Word[st],Word[end]);
       st++;
       end--;
    }
    cout<<Word;
}
int main(){
    char Word[]={"Tanmaya"};
   reverse(Word,strlen(Word));
   return 0;
}