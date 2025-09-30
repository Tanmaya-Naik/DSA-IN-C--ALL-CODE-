#include <iostream>
#include <vector>
#include <string>
using namespace std;
void PrintBoard(vector<vector<char>>Board){
    int n=Board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<Board[i][j]<<" ";
        }
        cout<<endl;
    }

    
     cout<<"-----------------------"<<endl;
}
void NQueen(vector<vector<char>>Board,int row){
     int n=Board.size();
    if (row==n)
    {
        PrintBoard(Board);
        return;
    }
    
   
    for (int j = 0; j < n; j++)
    {
        Board[row][j]='Q';
        NQueen(Board,row+1);
        Board[row][j]='.';
    }
    
} 
int main(){
    vector<vector<char>>Board;
    int n=2;
    for (int i = 0; i < n; i++)
    {
        vector<char>newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
             
        }
        Board.push_back(newRow);
    }
    NQueen(Board,0);
    return 0;
}