#include <iostream>
using namespace std;
int Sum(int nums[][3],int n,int m){
    int sum=0;
    for (int i = 1; i <=1; i++)
    {
        for ( int j = 0; j < m; j++)
        {
            sum+=nums[i][j];
        }
        
    }
    return sum;

}

int main(){
    int nums[3][3] = { {1,4,9}, {12,4,2}, {2,2,3} };
    cout<<"The sum of the element in the 2nd row is "<<Sum(nums,3,3)<<endl;
    return 0;
}