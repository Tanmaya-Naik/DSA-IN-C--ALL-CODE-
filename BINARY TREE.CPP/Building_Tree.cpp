// #include <iostream>
// #include <vector>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data=data;
//         left=right=NULL;
//     }
// };

// static int idx = -1;

// Node* buildTree(vector<int> nodes){
//     idx++;
//     if (nodes[idx]==-1)
//     {
//         return NULL;
//     }

//     Node* CurrNode=new Node(nodes[idx]);

//     CurrNode->left=buildTree(nodes);
//     CurrNode->right=buildTree(nodes);

//     return CurrNode;
    
// }

// void preOrder(Node* root){
//     if (root==NULL)
//     {
//         return;
//     }

//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);

    
// }
// int main(){
//     vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
//     Node* root=buildTree(nodes);
//     cout<<"Root of the tree is="<<root->data<<endl;

//     preOrder(root);
//     return 0;
// }



// LISTEN TANMYA THIS IS WORK FOR YOU WHENEVER YOU SEE THIS PLEASE WRITE ALL THE INORDER,PRE ORDER ,POST ORDER BY MAKING UNIQUE FILE FOR EACH AND SAVE AND DONT COPY PASTE WRITE ON YOUR OWN BRO 









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
    if (nodes[idx]==-1)
    {
       return NULL;
    }

    Node* Currnode=new Node(nodes[idx]);
    Currnode->left=buildTree(nodes);
    Currnode->right=buildTree(nodes);
    
    return Currnode;
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    //root
    cout<<root->data<<" ";
 
    //leftsubtree
    preOrder(root->left);

    //rightsubtree
    preOrder(root->right);
}

void Inorder(Node* root){
    if(root==NULL){
        return;
    }

    //Leftsubtree
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

    //left
    PostOrder(root->left);
    
    //rightsubtree
    PostOrder(root->right);

    //root
    cout<<root->data<<" ";
}

void LevelOrder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);

    while (!Q.empty())
    {
        Node* curr=Q.front();
        Q.pop();

        if(curr==NULL){
            cout<<endl;
            if(Q.empty()){
                break;
            }
            Q.push(NULL);
        }
        else{

        cout<<curr->data<<" ";
        

        if(curr->left!=NULL){
            Q.push(curr->left);
        }

        if(curr->right!=NULL){
            Q.push(curr->right);
        }
     }

   }
    
}

int Height(Node* root){
    if(root==NULL){
        return 0; // Null means no node in the tree so return 0;
    }

    int leftHT=Height(root->left);
    int rightHT=Height(root->right);

    int currHT=max(leftHT,rightHT)+1;

    return currHT;

}
int CountNode(Node* root){
    if(root==NULL){
        return 0;
    }

    int LeftCount=CountNode(root->left);
    int RightCount=CountNode(root->right);

   return LeftCount+RightCount+1;
}

int Diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int currDiam=Height(root->left)+Height(root->right)+1;

    int leftDiam=Diameter(root->left);
    int rightDiam=Diameter(root->right);

    return max(currDiam,max(leftDiam,rightDiam));
}

void Topview(Node* root){
    queue<pair<Node*,int>> Q;  //THIS STORE (NODE,HORIZONTAL DISTANCE)
    map<int,int> m;     //THIS STORE (HORIZONTAL DISTANCE(unique),node->data)

    Q.push(make_pair(root,0));  //Passing root node and horizontal distance=0 to the first position of queue
    while (!Q.empty())
    {
        pair<Node*,int> curr=Q.front();   //Here we get root node and horizontal distance=0 which is first position of queue
        Q.pop();

        Node* currNode=curr.first;
        int currHD=curr.second;

        if(m.count(currHD)==0){  //HD doesnot exist before
            m[currHD]=currNode->data;
        }

        if(currNode->left!=NULL){
            pair<Node*,int> left=make_pair(currNode->left,currHD-1);
            Q.push(left);
        }

        if(currNode->right !=NULL){
            pair<Node*,int> right=make_pair(currNode->right,currHD+1);
            Q.push(right);
        }
    }

    //Print the data by for each loop
    for(auto it : m){
        cout<<it.second<<" ";
       
    }
    cout<<endl;
    
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
void KthHelper(Node* root,int k,int currlevel){
    if(root==NULL){
        return;
    }
    if(currlevel==k){
        cout<<root->data<<" ";
        return; //As we dont need to go down after finding the k
    }

    KthHelper(root->left,k,currlevel+1); //for leftsubtree
    KthHelper(root->right,k,currlevel+1); //for rightsubtree
}
void KthLevel(Node* root,int k){
    KthHelper(root,k,1);//We need curr level also for this code AND FROM MAIN WE CANT PASS CURRLEVEL NOOB TANMAYA so we create a helper function where we pass curr level and call it here
    cout<<endl; 
}

bool RootToNOdepath(Node* root,int n,vector<int> &path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==n){
        return true;
    }

    int isleft=RootToNOdepath(root->left,n,path);
    int isright=RootToNOdepath(root->right,n,path);

    if(isleft || isright){
        return true;
    }
    path.pop_back();
    return false;

}
int sum(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftsum=sum(root->left);
    int rightsum=sum(root->right);
    int currsum=leftsum+rightsum+root->data;

    return currsum;
}


int LCA(Node *root,int n1,int n2){
    vector<int> path1;
    vector<int> path2;

    RootToNOdepath(root,n1,path1);
    RootToNOdepath(root,n2,path2);
    
    int lca=-1;
    for (int i = 0,j=0; i < path1.size() && j<path2.size(); i++,j++)
    {
        if(path1[i] != path2[j]){
            return lca;
        }
        lca=path1[i];
    }

    return lca;
    
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"The root of this tree is="<<root->data<<endl;
    cout<<"PREORDER TREE TRAVERSAL:"<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"INORDER TREE TRAVERSAL:"<<endl;
    Inorder(root);
    cout<<endl;
    cout<<"POSTORDER TREE TRAVERSAL:"<<endl;
    PostOrder(root);
    cout<<endl;
    cout<<"LEVEL ORDER TREE TRAVERSAL:"<<endl;
    LevelOrder(root);
    cout<<endl;
    cout<<"Sum of the tree is "<<sum(root)<<endl;
    cout<<"The height of this tree is="<<Height(root)<<endl;
    cout<<"Total Node present int this tree is = "<<CountNode(root)<<endl;
    cout<<"The diameter of this tree is="<<Diameter(root)<<endl;
    Topview(root);
    ButtomView(root);
    
    KthLevel(root,3);
    int n1=4,n2=3;
    cout<<LCA(root,n1,n2);
    
    return 0;

}