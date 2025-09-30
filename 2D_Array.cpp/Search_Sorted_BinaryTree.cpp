//Binary Search Technique
#include <iostream>
using namespace std;
bool SEarch_Using_BT(int matrix[][4],int row,int col,int target){
    for (int i =0 ; i <row ; ++i)
    {
        int start=0,end=col-1;
        while (start<=end)
        {
            int mid=start+(end-start)/2;
            if (matrix[i][mid]==target)
            {
                return true;
            }
            else if (matrix[i][mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            
            
        }
        
    }
    return false;
}
int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
    int row=4;
    int col=4;
    if (SEarch_Using_BT(matrix,row,col,50))
    {
        cout<<"The target number is found on the matrix"<<endl;
    }
    else{
        cout<<"The target number is not found in the matrix";
    }
    return 0;
    

}