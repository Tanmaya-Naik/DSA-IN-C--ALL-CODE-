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

void Preorder(Node* root){
    if(root==NULL){
        return;
    }
    //root
    cout<<root->data<<" ";
    //leftsubtree
    Preorder(root->left);
    
    //rightsubtree
    Preorder(root->right);
}
void Inorder(Node* root){
    if(root==NULL){
        return;
    }
    //leftsubtree
    Inorder(root->left);
    //root
    cout<<root->data<<" ";
    //rightsubtree
    Inorder(root->right);

}
void PostOrder(Node* root){
    if(root==NULL){
        return;
    }
    //leftsubtree
    PostOrder(root->left);
    
    //rightsubtree
    PostOrder(root->right);

    //root print
    cout<<root->data<<" ";

}
void LevelOrder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> Q;
    Q.push(root);
    while (!Q.empty())
    {
        Node* curr=Q.front();
        Q.pop();

        cout<<curr->data<<" ";

        if(curr->left != NULL){
            Q.push(curr->left);
        }
        if(curr->right != NULL){
            Q.push(curr->right);
        }
    }
    
}
int main(){
    vector<int> nodes={1,2,3,4,5,6,-1,-1,-1,-1,7,-1,-1,-1,8,-1,9,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"The root of this tree is = "<<root->data<<endl;
    Preorder(root);
    cout<<endl;
    Inorder(root);
    cout<<endl;
    PostOrder(root);
    cout<<endl;
    LevelOrder(root);
    return 0;
}