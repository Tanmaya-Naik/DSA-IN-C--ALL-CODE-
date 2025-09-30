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
Node* LCA2(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 ||root->data==n2){
        return root;
    }
    Node* leftLCA=LCA2(root->left,n1,n2);
    Node* rightLCA=LCA2(root->right,n1,n2);

    if(leftLCA !=NULL && rightLCA!=NULL){
        return root; //CASE-4
    }

    return leftLCA==NULL ? rightLCA:leftLCA;
}
int distance(Node* root,int n){
    if(root==NULL){
        return -1;
    }

    if(root->data==n){
        return 0;
    }

    int leftdist=distance(root->left,n);
    if(leftdist != -1){
        return leftdist+1;
    }


    int rightdist=distance(root->right,n);
    if(rightdist != -1){
        return rightdist+1;
    }

    return -1;
}
int mindist(Node* root,int n1,int n2){
    Node* lca=LCA2(root,n1,n2);

    int dist1=distance(lca,n1);
    int dist2=distance(lca,n2);

    return dist1+dist2;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"The root of this tree is="<<root->data<<endl;
    int n1=4,n2=5;
    cout<<"LOWEST COMMON ANCESTOR IS=" <<LCA2(root,n1,n2)->data<<endl;
    cout<<"Minimum distance= "<<mindist(root,n1,n2)<<endl;
    return 0;
}