class Solution {
public:
    int trap(vector<int>& height) {
        //���мӣ���ǰ�е���ˮ=Min(�����ߣ��ұ����)-��ǰ�и߶�
        int result=0;
         for(int i=0;i<height.size();i++)
         {
        int left=0,right=0;
        for(int j=i-1;j>=0;j--)
        {//��������
         if(height[j]>left)
         left=height[j];
        }
        for(int k=i+1;k<height.size();k++)
        {//���ұ����
            if(height[k]>right)
            right=height[k];
        }
        if(min(left,right)>height[i])
         result+=min(left,right)-height[i];
         }//for
         return result;
    }
};
