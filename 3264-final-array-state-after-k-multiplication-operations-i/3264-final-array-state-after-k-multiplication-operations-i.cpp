class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int minidx=0;
            for(int i=1; i<nums.size(); i++){
                if(nums[i]<nums[minidx]) minidx=i;
            }
            nums[minidx] *= multiplier;
        }
        return nums;
    }
};