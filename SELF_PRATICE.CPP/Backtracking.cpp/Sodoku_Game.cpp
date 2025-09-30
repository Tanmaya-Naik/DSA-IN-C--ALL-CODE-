// #include <iostream>
// using namespace std;
// void PrintSudoku(int sudoku[][9]){
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = 0; j < 9; j++)
//         {
//             cout<<sudoku[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }
// bool isSafe(int sudoku[9][9],int row, int col,int digit){
//    //vertical check
//    for (int i = 0; i < 9; i++)
//    {
//     if (sudoku[i][col]==digit)
//     {
//         return false;
//     }
    
//    }
//    //horizontal check
//    for (int j = 0; j < 9; j++)
//    {
//     if (sudoku[row][j]==digit)
//     {
//         return false;
//     }
//    }
//    //3*3 grid check
//    int startrow=(row/3)*3;
//    int startcol=(col/3)*3;

//    for (int i = startrow; i < startrow+3; i++)
//    {
//     for (int j = startcol; j < startcol+3; j++)
//     {
//         if (sudoku[i][j]==digit)
//         {
//             return false;
//         }
        
        
//     }
    
//    }
//    return true;
// }
// bool Solvesudoko(int sudoku[9][9],int row,int col){
//     if (row==9)
//     {
//        PrintSudoku(sudoku);
//        return true;
//     }
//     int nextrow=row;
//     int nextcol=col+1;
//     if (nextcol==9)
//     {
//         nextrow=row+1;
//         nextcol=0;
//     }
//     if (sudoku[row][col]!=0)
//     {
//        return Solvesudoko(sudoku,nextrow,nextcol);
//     }
    
//     for ( int digit = 1; digit <=9; digit++)
//     {
//         if (isSafe(sudoku,row,col,digit))
//         {
//             sudoku[row][col]=digit;
//             if (Solvesudoko(sudoku,nextrow,nextcol))
//             {
//                 return true;
//             }
//             sudoku[row][col]=0;
//         }
        
//     }
//     return false;
    
// }
// int main(){
//     int Sudoku[9][9] = {
//     {5, 3, 0, 0, 7, 0, 0, 0, 0},
//     {6, 0, 0, 1, 9, 5, 0, 0, 0},
//     {0, 9, 8, 0, 0, 0, 0, 6, 0},
//     {8, 0, 0, 0, 6, 0, 0, 0, 3},
//     {4, 0, 0, 8, 0, 3, 0, 0, 1},
//     {7, 0, 0, 0, 2, 0, 0, 0, 6},
//     {0, 6, 0, 0, 0, 0, 2, 8, 0},
//     {0, 0, 0, 4, 1, 9, 0, 0, 5},
//     {0, 0, 0, 0, 8, 0, 0, 7, 9}
// };
// Solvesudoko(Sudoku,0,0);
// return 0;
// }



#include <iostream>
using namespace std;
void PrintSodoku(int sodoku[][9]){
    for (int i = 0; i < 9; i++)
    {
       for (int j = 0; j < 9; j++)
       {
        cout<<sodoku[i][j]<<" ";
       }
       cout<<endl;
    }
    
}
bool isSafe(int sodoku[9][9],int row,int col,int digit){
    //vertical
    for (int i = 0; i < 9; i++)
    {
        if (sodoku[i][col]==digit)
        {
           return false;
        }
        
    } 

    //horizontal
    for (int j = 0; j < 9; j++)
    {
        if (sodoku[row][j]==digit)
        {
           return false;
        }
        
    }
    
    //3*3 grid check
    int startrow=(row/3)*3;
    int startcol=(col/3)*3;
    for (int i = startrow; i < startrow+3; i++)
    {
        for (int j = startcol; j < startcol+3; j++)
        {
            if (sodoku[i][j]==digit)
            {
               return false;
            }
            
        }
        
    }
    return true;
}
bool sodoku_slover(int sodoku[9][9],int row,int col){
    if (row==9)
    {
        PrintSodoku(sodoku);
        return true;
    }
    int nextrow=row;
    int nextcol=col+1;
    if (nextcol==9)
    {
        nextrow=row+1;
        nextcol=0;
    }
    if (sodoku[row][col]!=0)
    {
        return sodoku_slover(sodoku,nextrow,nextcol);
    }
    
    for (int digit = 1; digit <=9; digit++)
    {
        if (isSafe(sodoku,row,col,digit))
        {
           sodoku[row][col]=digit;
           if (sodoku_slover(sodoku,nextrow,nextcol))
           {
            return true;
           }
           sodoku[row][col]=0;
        }
        
    }
    return false;
    
    
}
int main(){
    int sodoku[9][9] = {
    {0, 0, 0, 0, 0, 0, 2, 0, 0},
    {0, 0, 0, 6, 0, 0, 0, 0, 3},
    {0, 7, 4, 0, 8, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 3, 0, 0, 2},
    {0, 8, 0, 0, 4, 0, 0, 1, 0},
    {6, 0, 0, 5, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 7, 8, 0},
    {5, 0, 0, 0, 0, 9, 0, 0, 0},
    {0, 0, 8, 0, 0, 0, 0, 0, 0}
};
sodoku_slover(sodoku,0,0);
return 0;
}