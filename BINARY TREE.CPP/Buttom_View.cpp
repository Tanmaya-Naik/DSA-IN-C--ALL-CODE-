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

void ButtomView(Node* root){
    queue<pair<Node*,int>> Q;
    map<int,int> m;

    Q.push(make_pair(root,0));
    while(!Q.empty()){
        pair<Node*,int> curr=Q.front();
        Q.pop();

        Node* currNode=curr.first;
        int currHd=curr.second;

        m[currHd]=currNode->data;//Update each time

        if(currNode->left != NULL){
            pair<Node*,int> leftchild=make_pair(currNode->left,currHd-1);
            Q.push(leftchild);
        }
    
        if(currNode->right != NULL){
            pair<Node*,int> rightchild=make_pair(currNode->right,currHd+1);
            Q.push(rightchild);
        }

    }

    for(auto it:m){
        cout<<it.second<<" ";
    }
    cout<<endl;

}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node* root=buildTree(nodes);
     cout<<"The root of this tree is="<<root->data<<endl;
    ButtomView(root);
    return 0;
}