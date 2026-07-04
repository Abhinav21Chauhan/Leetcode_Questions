class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> v = {-1,-1};
    //    int lo=0;
    //    int hi=nums.size()-1;
    //    while(lo<=hi){
    //     int mid = lo + (hi-lo)/2;
    //     if(nums[mid]==target){

    //     }
       for(int i=0; i<nums.size(); i++){
        if(nums[i]==target){
            v[0]=i;
            break;
        }
       }
       for(int j=nums.size()-1; j>=0; j--){
        if(nums[j]==target){
            v[1] = j;
            break;
        }
       }
       return v;
    }
};