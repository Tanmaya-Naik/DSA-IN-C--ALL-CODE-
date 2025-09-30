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
int Height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftheight=Height(root->left);
    int rightheight=Height(root->right);

    return max(leftheight,rightheight)+1;
}
int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int currDiam=Height(root->left)+Height(root->right)+1;
    int leftDiam=diameter(root->left);
    int rightDiam=diameter(root->right);

    return max(currDiam,max(leftDiam,rightDiam));
}


//OPTIMIZED WAY TO CALCULATE DIAMTER
pair<int,int> Diameter2(Node* root){
    if(root==NULL){
    return make_pair(0,0);
    
    }

    //1-Diameter and 2-Height
    pair<int,int> LeftInfo=Diameter2(root->left);//It store LEFTDIAMETER AND LEFTHEIGHT
    pair<int,int> rightInfo=Diameter2(root->right);//It store RIGHTDIAMETER AND RIGHTHEIGHT

    int currDiam=LeftInfo.second+rightInfo.second+1;
    int finalDiam=max(currDiam,max(LeftInfo.first,rightInfo.first));
    int finalHeight=max(LeftInfo.second,rightInfo.second)+1;

    return make_pair(finalDiam,finalHeight);

}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTRee(nodes);
    cout<<"The root of this tree is = "<<root->data<<endl;
    // cout<<"Height= "<<Height(root)<<endl;
    cout<<"Diamter of this given tree is= "<<Diameter2(root).first<<endl;
    cout<<"Diamter of this given tree is= "<<diameter(root)<<endl;
    return 0;
}
