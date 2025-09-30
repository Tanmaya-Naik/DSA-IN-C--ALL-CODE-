#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<class T>
class Stack{
      vector<T> vec;
public:
    void push(T val){
        vec.push_back(val);
    }
    
    void pop(){
            if (isempty())
            {
               cout<<"Stack is empty\n";
               return;
            }
            vec.pop_back();
    }

    T top(){
        int lastIdx=vec.size()-1;
        return vec[lastIdx];
    }
    bool isempty(){
        return vec.size()==0;
    }

};
int main(){
    Stack<int> s;
    Stack<char> stk;
    Stack<string> st;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    

    while (!s.isempty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
   
    stk.push('e');
    stk.push('d');
    stk.push('c');
    stk.push('b');
    stk.push('a');
    
     while (!stk.isempty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    cout<<endl;
     
    
    st.push("HELLO");
    st.push("BABY");
    st.push("TANU");
    st.push("AREYOU");
    st.push("HOW");

    while (!st.isempty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}