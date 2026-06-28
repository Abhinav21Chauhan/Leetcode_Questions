class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int i = 0, j = 1;
        int temp = 0;
        while(j < nums.size()) {
            if(nums[i] == nums[j]) {
                temp = nums[i]; 
                break;     
            }
            i++;
            j++;
        }
        return temp;
    }
};
