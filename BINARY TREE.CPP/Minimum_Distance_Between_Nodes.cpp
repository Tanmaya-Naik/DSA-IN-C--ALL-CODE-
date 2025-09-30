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
    if(root->data==n1 || root->data==n2){
        return root;
    }

    Node* leftLca=LCA2(root->left,n1,n2);
    Node* rightLca=LCA2(root->right,n1,n2);

    if(leftLca != NULL && rightLca!=NULL){
        return root; //case 4
    }

    return leftLca==NULL?rightLca:leftLca;

}
int Distance(Node* root,int n){   //REMEMBER THAT THIS FUNCTION COUNT FORM THE LCA NOT FROM THE ROOT AND MAKE SURE THAT U ARE PASSING LCA AS ROOT TO THIS FUCTION AND NOT THE ROOT REMEMBER
    if(root==NULL){
        return -1;
    }

    if(root->data==n){
        return 0;
    }

    int leftdistance=Distance(root->left,n);

    if(leftdistance !=-1){
        return leftdistance+1;

    }
    
    int rightdistance=Distance(root->right,n);
    if(rightdistance !=-1){
        return rightdistance+1;

    }

  return -1;
}
int minimumDist(Node* root,int n1,int n2){
    Node* lca=LCA2(root,n1,n2);

    int dist1=Distance(lca,n1);
    int dist2=Distance(lca,n2);

    return dist1+dist2;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"The root of this Binary tree is= "<<root->data<<endl;
    int n1=4,n2=5;
    cout<<LCA2(root,n1,n2)->data<<endl;
    cout<<minimumDist(root,n1,n2)<<endl;
    return 0;
    
}