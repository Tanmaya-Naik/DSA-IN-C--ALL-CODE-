//0-1 Triangle Pattern
// #include <iostream>
// using namespace std;
// int main(){
//     bool value=true;
//     int n=5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <=i; j++)
//         {
//             cout<<value;
//             value=!value;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//2-Print the Rhombus Pattern
// #include <iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <=1; j++)
//         {
//             cout<<"*****";
//         }
//         cout<<endl;
//     }
    
// }


//3-Print the Palindromic Pattern with Numbers
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i ; j++)//space
        {
            cout<<" ";
        }
        for (int j = i; j >=1 ; j--)//backward palindrome
        {
            cout<<j;
        }
        for (int j = 2; j <=i ; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}