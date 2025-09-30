vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    if(root==NULL){
        return {};
    }
    vector<vector<int>> ans;
    deque<TreeNode*> deq;
    deq.push_back(root);
    bool reverse=false;
    while(!deq.empty()){
        vector<int> temp;
        int size=deq.size();
        for(int i=0;i<size;i++){
            if(!reverse){
                TreeNode* node=deq.front();
                deq.pop_front();
                temp.push_back(node->val);
                if(node->left != NULL){
                    deq.push_back(node->left);
                }
                if(node->right != NULL){
                    deq.push_back(node->right);
                }
                
            }
            else{
                TreeNode* node=deq.back();
                deq.pop_back();
                temp.push_back(node->val);
                if(node->right != NULL){
                    deq.push_front(node->right);
                }
                if(node->left != NULL){
                    deq.push_front(node->left);
                }
                
            }
            
            
        }
        reverse=!reverse;
        ans.push_back(temp);
            
        }
        return ans;
    }
