/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode*> q;
        TreeNode* temp;
        if(!root) return {};
        q.push(root);
        
        vector<int> v;
        vector<vector<int>> all;
        
        while( !q.empty() ){
            
            int n = q.size();
            
            for(int i = 0 ; i < n ; ++i){
                temp = q.front();
            
                v.push_back(temp->val);
                if(temp->left){
                    q.push( temp->left );
                }
                if(temp->right){
                    q.push(temp->right);
                }
                q.pop();
            }
            all.push_back(v);
            v.clear();
        }
        return all;
    }
};