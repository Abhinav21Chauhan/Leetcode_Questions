class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = nums.size()-1;
        int ans = (nums[i]-1)*(nums[i-1]-1);
        return ans;
    }
};