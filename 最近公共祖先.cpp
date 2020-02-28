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
        //˼·���Ǻ�������������������ڹ�������prev,��q,p��λ�þ�ֻ�����������Ҫô������
        //Ҫô�����ң�Ҫô���ҷֲ������ú��������root����ÿ�εݹ�ĸ��ڵ�
        //���root������������q,p,��ȥ������������
        //�������������p,q,��ȥ������������
        //����������������������򷵻�NULL
        //������������������У�q��p�����򷵻ص�ǰ�����root
        if(!root||root==p||root==q)return root;
        auto left=lowestCommonAncestor(root->left,p,q);
        auto right=lowestCommonAncestor(root->right,p,q);
        if(!left&&!right) return NULL;//����������û��
        else if(!right)   return left;//��Ϊ��
        else if(!left)    return right;//��Ϊ��
        else              return root;//���ҽԲ�Ϊ��

    }
};
//��ָOffer�ṩ�Ľⷨ
class Solution {
public:
    vector<TreeNode*> path; //��path���㵽���ȵ�·������ֹ�ظ��������
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
    bool isAncestor(TreeNode* root,TreeNode* p){ //�ж�root�Ƿ���p������,ͬʱ����·��
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
