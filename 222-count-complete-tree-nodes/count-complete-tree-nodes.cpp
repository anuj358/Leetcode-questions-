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
    int countNodes(TreeNode* root) {
        if(!root)
        return 0;

        int lh=findheightleft(root);
        int rh=findheightright(root);

        if(lh==rh)
        return (1<<lh)-1;

        return 1+countNodes(root->left)+countNodes(root->right);

    }
    int findheightleft(TreeNode* node)
    {
        int high=0;
        while(node){
            high++;
            node=node->left;
        }
        return high;
    }
    int findheightright(TreeNode* node)
    {
        int high=0;
        while(node){
            high++;
            node=node->right;
        }
        return high;
    }
};