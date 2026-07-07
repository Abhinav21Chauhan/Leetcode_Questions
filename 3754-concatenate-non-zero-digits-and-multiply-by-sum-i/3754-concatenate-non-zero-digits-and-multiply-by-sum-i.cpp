class Solution {
public:
    long long sumAndMultiply(int n) {
        int p = 1;
      int sum = 0;
      int x=0;
      while(n!=0){
        int rem = n%10;
        sum += rem;
        if(rem!=0){
            x += rem * p;
            p *= 10;
        }
        n /= 10;
      }
      return 1LL*x*sum;
    }
};