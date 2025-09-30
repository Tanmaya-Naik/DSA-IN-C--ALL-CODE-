                                     //THIS IS THE CODE WITHOUT USING C++ STL LIBRARY FUNCTION

// #include <iostream>
// #include <string>
// using namespace std;

// template<class T>
// class Node{
// public:
// T data;
// Node* next;
   
//    Node(T val){
//     data=val;
//     next=NULL;
//    }
// };


// template<class T>
// class Stack{
//     Node<T>* head;

// public:
//   Stack(){
//     head=NULL;
//   }

//   void push(T val){
//     //push value at the front
//     Node<T>* newNode=new Node<T>(val);
//     if (head==NULL)
//     {
//        head=newNode;
//     }
//     else{
//         newNode->next=head;
//         head=newNode;
//     }
//   }
  
//   void pop(){
//     //function for pop_front
//     Node<T>* temp=head;
//     if (head==NULL)
//     {
//         cout<<"There is nothing to delete\n";
//     }
//     else{
//         temp=head;
//         head=head->next;
//         delete temp;
//     }
    
//   }
//   T top(){
//     return head->data;
//   }

//   bool isempty(){
//     return head==NULL;
//   }
// };

// int main(){
//     Stack<int> ll;

//     ll.push(5);
//     ll.push(4);
//     ll.push(3);
//     ll.push(2);
//     ll.push(1);

//     while (!ll.isempty())
//     {
//         cout<<ll.top()<<" ";
//         ll.pop();
//     }
//     cout<<endl;
//     return 0;
    
    
// }
                                      
                                       //THIS IS THE CODE WITHOUT USING C++ STL LIBRARY FUNCTION
#include <iostream>
#include <list>

using namespace std;

template<class T>
class Stack{
    list<T> ll;
    
    public:
    void push(T val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    T top(){
        return ll.front();
    }
    bool isempty(){
        return ll.size()==0;
    }

};
int main(){
    Stack<int> st;

    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    while (!st.isempty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
    
}