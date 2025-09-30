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
Node* buildTRee(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }

    Node* currNode=new Node(nodes[idx]);
    currNode->left=buildTRee(nodes);
    currNode->right=buildTRee(nodes);

    return currNode;
}
void LEVELORDER(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> Q;
    Q.push(root);
    while (!Q.empty())
    {
        Node* currNode=Q.front();
        Q.pop();

        cout<<currNode->data<<" ";

        if(currNode->left !=NULL){
            Q.push(currNode->left);
        }
        if(currNode->right !=NULL){
            Q.push(currNode->right);
        }
    }
    
}

int TRANSFORM(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftold=TRANSFORM(root->left);
    int rightold=TRANSFORM(root->right);
    int currold=root->data;

    root->data=leftold+rightold;

    if(root->left != NULL){
        root->data += root->left->data;
    }

    if(root->right != NULL){
        root->data +=root->right->data;
    }
    
    return currold;
}

int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTRee(nodes);
    cout<<"The root of this tree is="<<root->data<<endl;
    LEVELORDER(root);
    cout<<endl;
    
    TRANSFORM(root);
    cout<<"The root of this tree is="<<root->data<<endl;
    LEVELORDER(root);
    cout<<endl;
   


    return 0;
}//27 22 0 0 13 7 0