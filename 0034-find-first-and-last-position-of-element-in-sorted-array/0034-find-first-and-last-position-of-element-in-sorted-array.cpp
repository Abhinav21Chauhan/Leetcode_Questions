class Solution {
public:

    int firstoccurence(vector<int>& nums, int target){
        int lo = 0;
        int hi = nums.size()-1;
        int ans=-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target){
                ans = mid;
                hi = mid-1;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
        return ans;
    }

    int lastoccurence(vector<int>& nums, int target){
        int lo = 0;
        int hi = nums.size()-1;
        int ans=-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target){
                ans = mid;
                lo = mid+1;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
        return ans;
    }

       
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v(2);
        v[0] = firstoccurence(nums, target);
        v[1] = lastoccurence(nums,target);

        return v;
    }
};