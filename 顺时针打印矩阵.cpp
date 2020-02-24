class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        //���ݻ�ͼ ����һȦһȦ�ı��� 
        if(matrix.size()==0||matrix[0].size()==0) return {};
        int row=matrix.size();//��
        int col=matrix[0].size();//��
        int up=0,down=row-1,left=0,right=col-1;//�߽�ĳ�ʼֵ��������������
        vector<int>v;
        while(left<=right&&up<=down){
        //��һ�� ������
        for(int i=left;i<=right;i++)
            v.push_back(matrix[up][i]);
        //�ڶ��� ��������
        for(int i=up+1;i<=down;i++)
            v.push_back(matrix[i][right]);
        //������ ��������
        for(int i=right-1;i>=left&&up<down;i--)
            v.push_back(matrix[down][i]);
        //���Ĳ� ��������
        for(int i=down-1;i>up&&left<right;i--)
            v.push_back(matrix[i][left]);
         up++;down--;left++;right--;
        }
        return v;
    }
};
