       
                    // This is the most optimized technique to slove this problem
                    // THIS TECHNIQUE IS ALSO CALLED AS STAIR CASE TECHNIQUE IN DSA

#include <iostream>
using namespace std;
int Stair_Case(int matrix[][4],int n,int m,int key){
    int i=0,j=m-1;
    while (i<n && j>=0)
    {
        if (matrix[i][j]==key)
        {
            cout<<"Found at "<<i<<","<<j;
            break;
        }
        else if (matrix[i][j]>key)
        {
            j--;
        }
        else if (matrix[i][j]<key)
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

    Stair_Case(matrix,4,4,50);
    return 0;
}

            

// BUT THE STAIR CASE SEARCH IS THE MOST OPTIMIZED SOLUTION FOR THIS PROBLEM SO NEVER USE THE BRUTEFORCE AND BINARY SEACH
//  TECHNIQUE TO SOLVE THIS PROBLEM THAT IS FOR YOUR BETTER UNDERSTAND ONLY SO NEVER NEVER 
//  USE THOSE 2 IN ANY INTERVIEW OR CODING TEST OR IN ANY CODING PLATFORM BECAUSE MOST OF 
//  THE CODING PLATFORM TAKE ONLY OPTIMIZED CODE