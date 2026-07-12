class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        v[0] = nums[0];
        for(int i=1; i<n; i++){
            v[i] = nums[i]+v[i-1];
        }
        int sum=0;
        
        for(int i=0; i<v.size(); i++){
            int start = max(0, i - nums[i]);
            if(start==0) sum += v[i];
            else sum = sum + v[i] - v[start-1]; 
        }
        return sum;

    }
};