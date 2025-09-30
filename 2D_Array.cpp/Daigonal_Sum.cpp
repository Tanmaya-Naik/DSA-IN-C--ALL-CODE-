// #include <iostream>
// using namespace std;
// void DaigonalSum(int mat[][4],int n){
//     int sum=0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i==j)
//             {
//                 sum += mat[i][j];
//             }
//             else if(j==n-i-1){
//                 sum += mat[i][j];
//             }
            
//         }
        
//     }  
//     cout<<"Sum is "<<sum;
// }

// int main(){
//     int mat[4] [4]={{1,2,3,4},
//                     {5,6,7,8},
//                     {9,10,12,12},
//                     {13,14,15,16}};
//    Diagonal(mat,4);
// return 0;

// }
//THIS ABOVE IS GIVING THE TIME COMPLEXITY OF O(N)^2 SO WE WRITE THE OPTIMIZED WAY

#include <iostream>
using namespace std;
void Diagonal(int mat[][4],int n){
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum += mat[i][i];
        if (i !=n-i-1)//HERE n-i-1 is col AND IT CHECK IF BOTH ROW AND COL ARE SAME IN ODD MATRIX TO AVOID REDUNDANCY
        {
            sum += mat[i][n-i-1];
        }
        
    }
    cout<<"Sum= "<<sum;
}
int main(){
    int mat[4] [4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,12,12},
                    {13,14,15,16}};
   Diagonal(mat,4);
return 0;

}
