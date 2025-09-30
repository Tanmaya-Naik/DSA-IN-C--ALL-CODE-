#include <iostream>
using namespace std;
int Count(int mat[2][3],int n,int m,int target){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int  j= 0; j < m; j++)
        {
            if (mat[i][j]==target)
            {
                count++;
            }
            
        }
        
    }
    return count;
}
int main(){
    int mat[2][3] = { {4,7,7}, {7,7,7} };
    cout<<Count(mat,2,3,7);
    return 0;
    
    
}