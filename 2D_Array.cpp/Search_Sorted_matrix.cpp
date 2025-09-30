#include <iostream> 
using namespace std;
// THIS IS CALLED STAIR CASE SEARCH IN DSA
int SearchSorted(int matrix[][4],int n,int m,int key){
    int i=0,j=m-1;
    while (i < n && j >=0)
    {
        if (matrix[i][j]==key)
        {
            cout<<"Found at matrix ("<<i<<","<<j<<")";
            break;
        }else if (matrix [i][j]>key)
        {
           j--;
        }
        else if (matrix [i][j]<key)
        {
           i++;
        }
        
        
    }
    return -1;
}

int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
int key=39;
SearchSorted(matrix,4,4,39);
return 0;
}