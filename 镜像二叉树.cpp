class Solution {
public:
    void Mirror(TreeNode *pRoot) {//�������������һ���Գ�
        if(pRoot==NULL)return;
        TreeNode ret=*pRoot;
        pRoot->left=pRoot->right;
        pRoot->right=ret.left;
        Mirror(pRoot->left);
        Mirror(pRoot->right);
