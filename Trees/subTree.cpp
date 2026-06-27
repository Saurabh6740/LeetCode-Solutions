#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
     bool issameTree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr && subRoot == nullptr) return true;
        if(root == nullptr || subRoot == nullptr) return false;
        return (root->val == subRoot->val) && issameTree(root->left, subRoot->left) && issameTree(root->right, subRoot->right);
       
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      if(root == nullptr) return false;
      if(subRoot == nullptr) return true;
      if(issameTree(root, subRoot)){
        return true;
      }
      return isSubtree(root->left,subRoot) || 
      isSubtree(root->right, subRoot);
        
    }
};