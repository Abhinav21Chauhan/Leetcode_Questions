class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
       vector<int>ans;
       long long sum=0;
       int i=0;
       int j=0;
       while(i<n){
        sum += nums[j];
        j++;
        ans.push_back(sum);
        if(j==n){
            sum = 0;
            i++;
            j=i;
        }
       }
       sort(ans.begin(), ans.end());
       long long sum2 = 0;
       for(int i=left-1; i<right; i++){
            sum2 += ans[i];
       }
       return sum2 % 1000000007;
    }
};