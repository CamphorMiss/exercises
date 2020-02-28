/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //思路不是很清晰，先梳理，如果存在公共祖先prev,则q,p的位置就只有三种情况，要么都在左，
        //要么都在右，要么左右分布，可用后序遍历。root就是每次递归的根节点
        //如果root的左子树包含q,p,则去左子树里面找
        //如果右子树包含p,q,则去右子树里面找
        //如果左右子树都不包含，则返回NULL
        //如果左右子树都包含有（q或p），则返回当前的这个root
        if(!root||root==p||root==q)return root;
        auto left=lowestCommonAncestor(root->left,p,q);
        auto right=lowestCommonAncestor(root->right,p,q);
        if(!left&&!right) return NULL;//左右子树都没有
        else if(!right)   return left;//左为空
        else if(!left)    return right;//右为空
        else              return root;//左右皆不为空

    }
};
//剑指Offer提供的解法
class Solution {
public:
    vector<TreeNode*> path; //用path存结点到祖先的路径，防止重复遍历结点
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res = NULL;
        isAncestor(root,p);
        int n = path.size();
        isAncestor(root,q);
        int m = path.size();
        for(int i=n-1,j=m-1;i>=0&&j>=n;i--,j--)
            if(path[i]!=path[j])
                break;
            else res = path[i];
        return res;
    }
    bool isAncestor(TreeNode* root,TreeNode* p){ //判断root是否是p的祖先,同时存入路径
        if(!root||!p) return false;
        if(root == p){
            path.push_back(root);
            return true;
        }
        else
            if(isAncestor(root->left,p)||isAncestor(root->right,p)){
                path.push_back(root);
                return true;
            }
            else
                return false;
    }
}; 
