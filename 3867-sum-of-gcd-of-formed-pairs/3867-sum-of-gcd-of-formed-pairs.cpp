class Solution {
public:
    int gcd(int a, int b) {
        while (b!=0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd;
        int mx = 0;
        for (int i=0; i<n; i++) {
            mx = max(mx, nums[i]);
            prefixGcd.push_back(gcd(nums[i], mx));
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long sum = 0;
        int i = 0, j = n - 1;
        while (i<j) {
            sum += gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }
        return sum;
    }
};