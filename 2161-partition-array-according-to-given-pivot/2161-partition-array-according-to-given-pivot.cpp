class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int l=0, e=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==pivot) e++;
            else if(nums[i]<pivot) l++;
        }

        vector<int> ans(nums.size());
        int less=0, equal=l, greater= l+e;
        for(int i=0;i<nums.size(); i++){
            if(nums[i]<pivot){
                ans[less] = nums[i];
                less++;
            }
            else if(nums[i]==pivot){
                ans[equal]= nums[i];
                equal++;
            }
            else{
                ans[greater] = nums[i];
                greater++;
            }
        }
        return ans;

    }
};