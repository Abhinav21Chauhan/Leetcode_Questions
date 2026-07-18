class Solution {
public:
    int gcd(int mx, int mn){
        while(mn!=0){
            int temp = mn;
            mn = mx%mn;
            mx = temp;
        }
        return mx;
    }
    int findGCD(vector<int>& nums) {
       int mx = INT_MIN;
       int mn = INT_MAX;
       for(int i=0; i<nums.size(); i++){
        if(nums[i]>mx) mx = nums[i];
        if(nums[i]<mn) mn = nums[i];
       }
       int x = gcd(mx, mn);
       return x; 
    }
};