#include <bits\stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
static int idx=-1;
Node* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }

    Node* currNode=new Node(nodes[idx]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);

    return currNode;
}

// void LEVELORDER(Node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<Node*> Q;
//     Q.push(root);
//     while (!Q.empty())
//     {
//         Node* currNode=Q.front();
//         Q.pop();

//         cout<<currNode->data<<" ";

//         if(currNode->left !=NULL){
//             Q.push(currNode->left);
//         }
//         if(currNode->right !=NULL){
//             Q.push(currNode->right);
//         }
//     }
    
// }
bool checkUNIVALUED(Node* root,int k){
    if(root==NULL){
        return true;
    }
    if(root->left->data != k){
        return false;
    }
    checkUNIVALUED(root->left,k);
    if(root->right->data != k){
        return false;
    }
    checkUNIVALUED(root->right,k);

    return false;
}

int main(){
    vector<int> nodes={1,1,1,-1,-1,1,-1,-1,1,-1,1,-1,-1};
    Node* root=buildTree(nodes);
    int k=root->data;
    cout<<checkUNIVALUED(root,k);
    cout<<endl;
    return 0;
}