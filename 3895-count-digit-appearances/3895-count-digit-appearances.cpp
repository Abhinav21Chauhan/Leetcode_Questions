class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            int temp = nums[i];
             if (temp == 0 && digit == 0) {
                count++;
                continue;
            }
            while(temp!=0){
                int rem = temp%10;
                if(rem == digit) count++;
                temp /= 10; 
            }
        }
        return count;
    }
};