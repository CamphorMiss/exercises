class Solution {
public:
    int trap(vector<int>& height) {
        //按列加，当前列的雨水=Min(左边最高，右边最高)-当前列高度
        int result=0;
         for(int i=0;i<height.size();i++)
         {
        int left=0,right=0;
        for(int j=i-1;j>=0;j--)
        {//找左边最高
         if(height[j]>left)
         left=height[j];
        }
        for(int k=i+1;k<height.size();k++)
        {//找右边最高
            if(height[k]>right)
            right=height[k];
        }
        if(min(left,right)>height[i])
         result+=min(left,right)-height[i];
         }//for
         return result;
    }
};
