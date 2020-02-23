class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       if(find(nums.begin(),nums.end(),target)==nums.end())return {-1,-1};
      int left=0,right=nums.size()-1;
         while(nums[left]!=target)left++;
         while(nums[right]!=target)right--;
         return {left,right};
    }
};
