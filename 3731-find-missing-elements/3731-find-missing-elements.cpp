class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mn=nums[0]+1;
        int mx=nums[n-1];
        int i=1;
        vector<int>ans;
        while(i<n){
            if(nums[i]==mn){
                i++;
                mn++;
                continue;
            }
            else if(nums[i]>mn){
                ans.push_back(mn);
                mn++;
            }
        }
        return ans;
    }
};