class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
       int start = max(0, n - k);
       int end = n+k;
       long long sum  =0;
       for(int x = start; x<=end; x++){
        if((abs(n-x) <= k) && ((n&x) == 0)) sum = sum + x;
       }
       return sum;
    }
};