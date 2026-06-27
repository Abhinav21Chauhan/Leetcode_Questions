class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mn = nums[0];
        int ans = -1;
        for(int j = 1; j < nums.size(); j++){
            if(nums[j] > mn) ans = max(ans, nums[j] - mn);
            else mn = nums[j];
        }
        return ans;
    }
};