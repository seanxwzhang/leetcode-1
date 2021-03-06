/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class SolutionRecursive {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        dfs(root, result);
        return result;
    }
    
    void dfs(TreeNode* node, vector<int>& result) {
        if (node == nullptr) return;
        result.push_back(node->val);
        dfs(node->left, result);
        dfs(node->right, result);
    }
};

class SolutionIterative {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode *> st;
        while (root != nullptr || !st.empty()) {
            if (root != nullptr) {
                res.push_back(root->val);
                st.push(root);
                root = root->left;
            } else {
                TreeNode *node = st.top();
                st.pop();
                root = node->right;
            }
        }
        return res;
    }
}; // Author: XC
