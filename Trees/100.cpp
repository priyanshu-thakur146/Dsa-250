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

bool comparison(TreeNode* p, TreeNode* q){
 if(p==NULL && q != NULL){
        return false;
    }
    if(q==NULL && p != NULL){
        return false;
    }
    if(p==NULL && q== NULL){
        return true;
    }


    if(p->val != q->val){
        return false;
    }
   
    return comparison(p->left,q->left) &&
           comparison(p->right,q->right);

}

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return comparison(p,q);
    }
};