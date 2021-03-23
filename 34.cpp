class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans{-1,-1};
        auto t = find(nums.begin(),nums.end(),target);
        if(t==nums.end())return ans;
        ans[0] = t - nums.begin();
        if(ans[0] == -1)return ans;
        int len = nums.size();
        int current = ans[0]+1;
        while(current<len && nums[current]==target){current++;}
        ans[1] = current-1;
        return ans;
        
        
    }
};