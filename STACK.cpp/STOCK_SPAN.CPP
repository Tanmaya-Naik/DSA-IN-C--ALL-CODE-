// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
 
// void STOCK_Span(vector<int> stock,vector<int> &span){
//     stack<int> s;
//     s.push(0);
//     span[0]=1;
//     for (int i = 1; i < stock.size(); i++)
//     {
//         int currPrice=stock[i];
//         while (!s.empty() && currPrice >= stock[s.top()] )
//         {
//             s.pop();
//         }
//         if (s.empty())
//         {
//             span[i]=i+1;
//         }
//         else{
//             int prevHigh=s.top();
//             span[i]=i-prevHigh;

//         }
        
//         s.push(i);
//     }
//     for (int i = 0; i < span.size(); i++)
//     {
//         cout<<span[i]<<" ";
//     }
//     cout<<endl;
// }


// int main(){
//     vector<int> stock={100,80,60,70,60,85,100};
//     vector<int> span={0,0,0,0,0,0,0};
//     STOCK_Span(stock,span);
//     return 0;
// }

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void Stock_span(vector<int> Stock,vector<int> &Span){
    stack<int> st;
    st.push(0);
    Span[0]=1;

    for (int i = 0; i < Stock.size(); i++)
    {
        int currPrice=Stock[i];
        while (!st.empty() && currPrice >= Stock[st.top()])
        {
            st.pop();
        }
        if (st.empty())
        {
            Span[i]=i+1;
        }
        else{
            int prevHigh=st.top();
            Span[i]=i-prevHigh;
        }

        st.push(i);//Push the or add the current value to the top of stack
    }
    
    for (int i = 0; i < Span.size(); i++)
    {
        cout<<Span[i]<<",";
    }
    cout<<endl;
}
int main(){
    vector<int> Stock={90,15,45,55,85,95,10,88};
    vector<int> Span={0,0,0,0,0,0,0,0};
    Stock_span(Stock,Span);
    return 0;
}