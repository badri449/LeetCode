class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curmax,ans;
        curmax = ans = nums[0];
        if(curmax<0)curmax =0;
        for(int i=1;i<nums.size();i++){
            curmax += nums[i];
            ans = max(curmax,ans);
            if(curmax<0)curmax =0;
        }
        return ans;
    }
};