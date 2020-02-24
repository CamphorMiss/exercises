class Solution {
public:
    void Mirror(TreeNode *pRoot) {//镜像就是左右做一个对称
        if(pRoot==NULL)return;
        TreeNode ret=*pRoot;
        pRoot->left=pRoot->right;
        pRoot->right=ret.left;
        Mirror(pRoot->left);
        Mirror(pRoot->right);
