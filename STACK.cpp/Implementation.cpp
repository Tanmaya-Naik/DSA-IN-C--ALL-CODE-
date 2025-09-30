#include <iostream>
#include <vector>
using namespace std;
class Stack{
    vector<int> vec;
    public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        if (isempty())
        {
            cout<<"The stack is empty and there is nothing to pop"<<endl;
            
        }
        
        vec.pop_back();
    }
    int top(){
        if (isempty())
        {
            cout<<"The stack is empty and there is nothing to assign top"<<endl;
            return -1;
        }
        
        int lastidx=vec.size()-1;
        return vec[lastidx];
    }
    bool isempty(){
          return vec.size()==0;
    }
};
int main(){
    Stack st;
    st.push(3);
    st.push(2);
    st.push(1);
    while (!st.isempty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}