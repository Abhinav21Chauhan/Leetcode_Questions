class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size()-1;
        int a = nums[0];
        int b = nums[1];
        int c = nums[n-1];
        int d = nums[n];
        int prod = (d*c)-(a*b);
        return prod;
    }
};