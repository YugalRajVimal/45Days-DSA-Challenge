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

    TreeNode* buildTreeTemp(vector<int>& preorder,vector<int>& inorder, int inS,int inE, int preS, int preE){
    // Write your code here
    if (inS > inE) {
      return NULL;
    }
    int LinS = inS;
	int ro=preorder[preS];
        int i;
		for (i = inS; i < inE; i++) {
          if (ro == inorder[i]) {
            break;
          }
        }
    int LinE = i-1;
	int LpreS = preS+1;
	int LpreE = LpreS+(LinE-LinS);
	int RinS = i+1;
	int RinE = inE;
	int RpreS =LpreE+1;
    int RpreE =preE;

    TreeNode* root = new TreeNode(preorder[preS]);
    root->left =buildTreeTemp(preorder, inorder, LinS, LinE, LpreS, LpreE);
    root->right=buildTreeTemp(preorder, inorder, RinS, RinE, RpreS, RpreE);
    return root;
} 


    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTreeTemp(preorder, inorder, 0, inorder.size()-1, 0, preorder.size()-1);
    }
};