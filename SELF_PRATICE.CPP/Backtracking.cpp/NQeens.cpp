// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// void PrintBoard(vector<vector<char>>Board){
//     int n=Board.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<Board[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"-----------"<<endl;
// }
// bool isSafe(vector<vector<char>>Board,int row,int col){
//     int n=Board.size();
//     //horizontal safet
//     for (int j = 0; j < n; j++)
//     {
//         if (Board[row][j]=='Q')
//         {
//             return false;
//         }
        
//     }
//     //Vertical safety check
//     for (int  i = 0; i < n; i++)
//     {
//         if (Board[i][col]=='Q')
//         {
//             return false;
//         }
        
//     }
//     //Diagonal left safety check
//     for (int  i =row,j=col; i>=0  && j>=0; i--,j--)
//     {
//         if (Board[i][j]=='Q')
//         {
//             return false;
//         }
        
//     }
//     //Diagonal right safety check
//     for (int  i =row,j=col; i>=0  && j<n; i--,j++)
//     {
//         if (Board[i][j]=='Q')
//         {
//             return false;
//         }
        
//     }
//     return true;
    
// }
// int NQueens(vector<vector<char>>Board,int row){
//     int n=Board.size();
//     if (row==n)
//     {
//         PrintBoard(Board);
//         return 1;
//     }
//     int count=0;
//     for (int j = 0; j < n; j++)
//     {
//         if (isSafe(Board,row,j))
//         {
//             Board[row][j]='Q';
//             count += NQueens(Board,row+1);
//             Board[row][j]='.';
//         }
        
//     }
//  return count;
// }
// int main(){
//     int n=4;
//     vector<vector<char>>Board;
//     for (int i = 0; i < n; i++)
//     {
//        vector<char>newRow;
//        for (int j = 0; j < n; j++)
//        {
//         newRow.push_back('.');
//        }
//        Board.push_back(newRow);
//     }
//     int count=NQueens(Board,0);
//     cout<<"Count: "<<count;
//     return 0;
// }

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void PrintBoard(vector<vector<char>>Board){
    int n=Board.size();
    for (int  i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
         cout<<Board[i][j]<<" ";
       }
       cout<<endl;
    }
    cout<<"----------------"<<endl;
}
bool isSAfe(vector<vector<char>> Board,int row,int col){
    int n=Board.size();
    //vertical
    for (int i = 0; i < n; i++)
    {
        if (Board[i][col]=='Q')
        {
            return false;
        }
        
    }
    //horizontal
    for (int j = 0; j < n; j++)
    {
        if (Board[row][j]=='Q')
        {
            return false;
        }
        
    }
    //Diagonal left
    for (int i = row,j=col; i >=0&&j>=0; i--,j--)
    {
       if (Board[i][j]=='Q')
        {
            return false;
        }
    }
    //Diagonal right
    for (int i = row,j=col; i >=0&&j<n; i--,j++)
    {
        if (Board[i][j]=='Q')
        {
            return false;
        }
        
        
    }
    return true;
}
int Nqueen(vector<vector<char>> Board,int row){
    int n=Board.size();
    if (row==n)
    {
        PrintBoard(Board);
        return 1;
    }
    int count=0;
    for (int j = 0; j < n; j++)
    {
        if (isSAfe(Board,row,j))
        {
            Board[row][j]='Q';
            
            count+=Nqueen(Board,row+1);
            Board[row][j]='.';

        }
        
    }
    return count;
}

int main(){
    vector<vector<char>> Board;
    int n=5;

    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        Board.push_back(newRow);
       
    }
    int count =Nqueen(Board,0);
    cout<<"Count:"<<count;
    return 0;
}