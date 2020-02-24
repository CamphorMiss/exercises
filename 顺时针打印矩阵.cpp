class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        //根据画图 就是一圈一圈的遍历 
        if(matrix.size()==0||matrix[0].size()==0) return {};
        int row=matrix.size();//行
        int col=matrix[0].size();//列
        int up=0,down=row-1,left=0,right=col-1;//边界的初始值，就是上下左右
        vector<int>v;
        while(left<=right&&up<=down){
        //第一步 从左到右
        for(int i=left;i<=right;i++)
            v.push_back(matrix[up][i]);
        //第二步 从上往下
        for(int i=up+1;i<=down;i++)
            v.push_back(matrix[i][right]);
        //第三步 从右往左
        for(int i=right-1;i>=left&&up<down;i--)
            v.push_back(matrix[down][i]);
        //第四步 从下往上
        for(int i=down-1;i>up&&left<right;i--)
            v.push_back(matrix[i][left]);
         up++;down--;left++;right--;
        }
        return v;
    }
};
