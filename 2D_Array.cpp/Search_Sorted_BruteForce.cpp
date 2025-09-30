                     //THIS IS THE BRUTE FORCE APPROACH
#include <iostream>
using namespace std;
void BF_technique(int matrix[][4],int n,int m,int key){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          if (matrix[i][j]==key)
          {
             cout<<i<<","<<j<<" IS IT RIGHT TANU BABY ?"<<endl;
             cout<<"YES DARLING IT IS ABSOLUTELY CORRECT MY BOY"<<endl;
             return;
          }
          
       }
    }
    cout<<"N0 IT IS NOT CORRECT MY BOY"<<endl;
    
}
int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,18,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
        BF_technique(matrix,4,4,39);
        return 0;
}
