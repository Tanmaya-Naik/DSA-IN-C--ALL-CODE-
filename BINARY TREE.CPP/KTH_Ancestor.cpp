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

    Node* currNOde=new Node(nodes[idx]);
    currNOde->left=buildTree(nodes);
    currNOde->right=buildTree(nodes);

    return currNOde;
}
int KTHAncestor(Node* root,int node,int k){
    if(root==NULL){
        return -1;
    }
    if(root->data==node){
        return 0;
    }

    int leftDist=KTHAncestor(root->left,node,k);
    int rightDist=KTHAncestor(root->right,node,k);

    if(leftDist==-1 && rightDist==-1){
        return -1;
    }

    int validval=leftDist==-1?rightDist:leftDist;
    if(validval+1==k){
        cout<<"The kth ancestor of the given node is= "<<root->data<<endl;
    }

    return validval+1;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"The root of this Binary tree is= "<<root->data<<endl;
    int node=6;
    int k=1;
    KTHAncestor(root,node,k);
    return 0;

}