#include <iostream>
#include <string.h>
using namespace std;
bool pallindrome(char word[],int n){
    int st=0,end=n-1;
    while (st<end)
    {
        if (word[st] != word[end])
        {
            cout<<"Given word is not a pallindrome";
            return false;
            
        }
        st++;
        end--;
    }
    cout<<"Given word is pallindrome";
    return true;
    
}
int main(){
    char word[]="racecar";
    pallindrome(word,strlen(word));
    return 0;

}