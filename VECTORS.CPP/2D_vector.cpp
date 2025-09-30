#include <iostream>
#include <vector>
using namespace std;
int main(){
 vector <vector<int>> matrix={{1,2,3},{4,5},{6}};
 for (int i = 0; i < matrix.size(); i++)//here i means row and in 2D vector
                                        //each row is a individual array which contain value
 {
    for (int j = 0; j < matrix[i].size(); j++)//to print the each number of that row
    {
        cout<<matrix[i][j];
    }
    cout<<endl;
 }
 return 0;
}