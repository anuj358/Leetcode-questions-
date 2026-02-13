/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ans;

    void preorderTraversal(Node* root) {
        if (root == NULL)
            return;

        ans.push_back(root->val);

        for (int i = 0; i < root->children.size(); i++) {
        Node* child = root->children[i];
        preorderTraversal(child);
}

    }

    vector<int> preorder(Node* root) {
        preorderTraversal(root);
        return ans;
    }
};
