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
 static int idx=-1;//initialize the start node with -1 so that index are count accurately
Node* BuildTree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node* CurrNode=new Node(nodes[idx]);
    CurrNode->left=BuildTree(nodes);
    CurrNode->right=BuildTree(nodes);

    return CurrNode;

}
void preOder(Node* root){
    if(root==NULL){
        return;
    }
    //root
    cout<<root->data<<" ";

    //left
    preOder(root->left);

    //right
    preOder(root->right);
}

int Height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHt=Height(root->left);
    int rightHt=Height(root->right);

    int currHt=max(leftHt,rightHt)+1;

    return currHt;
}

int CountNode(Node* root){
    if(root==NULL){
        return 0;
    }

    int LeftCount=CountNode(root->left);
    int RightCount=CountNode(root->right);

   return LeftCount+RightCount+1;
}

int Sum(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftSum=Sum(root->left);
    int rightSum=Sum(root->right);

   int currSum=leftSum+rightSum+root->data;
   cout<<"Sum is="<<currSum<<endl;
   
   return currSum;
}
//THIS IS THE APPROACH 1 TO FIND THE DIAMETER OF A TREE WE HAVE ALSO OPTIMIZED VERSION FOR THIS
int Diameter(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int currDiam = Height(root->left) + Height(root->right) + 1;
    int leftDiam = Diameter(root->left);
    int rightDiam = Diameter(root->right);

    
    return max({currDiam, leftDiam, rightDiam});
}

//THIS IS THE OPTIMIZED WAY TO FIND DIAMETER 
//THIS IS MORE OPTIMIZED BECAUSE IN THE ABOVE CASE WE ARE CALLING HEIGHT FUNCTION WHICH MAKE OUR CODE MORE COMLEXITY WHICH IS 0(n^2) 
//BUT HERE AS WE ARE COUNTING HEIGHT OURSELF WIHTOUT CALLING HEIGHT FUNCTION SO THAT WE RUN THIS COEDE IN 0(n) TIME COMPLEXITY 

pair<int,int> Diameter2(Node* root){
    if(root==NULL){
        return make_pair(0,0);
    }
    //Diameter,Height
    pair<int,int> leftt=Diameter2(root->left);
    pair<int,int> rightt=Diameter2(root->right);

    int currDiam=leftt.second+rightt.second+1;
    int finalDiam=max(currDiam,max(leftt.first,rightt.first));
    int finalheight=max(leftt.second,rightt.second)+1;

    return make_pair(finalDiam,finalheight);
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node* root=BuildTree(nodes);
    cout<<"The root of this tree is = "<<root->data<<endl;
    cout<<"PREORDER TREE TRAVERSAL"<<endl;
    preOder(root);
    cout<<endl;

    cout<<"The height of this tree is = "<<Height(root)<<endl;;
    cout<<"Total Node present int this tree is = "<<CountNode(root)<<endl;
    cout<<"Total sum is "<<Sum(root)<<endl;
    cout<<"APPROACH 1"<<endl;
    cout<<"The diameter of this tree is="<<Diameter(root)<<endl;
    cout<<"APPROACH 2"<<endl;
    cout<<"The diameter of this tree is="<<Diameter2(root).first<<endl;

    return 0;

    
}