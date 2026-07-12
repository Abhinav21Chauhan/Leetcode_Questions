class Solution {
public:
    int countPartitions(vector<int>& nums) {
      int n=nums.size();
      vector<int> v1(n);
      v1[0] = nums[0];
      vector<int>v2(n);
      v2[n-1] = nums[n-1]; 

      for(int i=1; i<n; i++){
        v1[i] = v1[i-1]+nums[i];
      } 

      for(int i=n-2; i>=0; i--){
        v2[i] = v2[i+1] + nums[i];
      }
      int count=0;

      for(int i=0; i<n-1; i++){
        if ((v1[i] - v2[i+1]) % 2 == 0)count++;
      }
      return count;
    }
};