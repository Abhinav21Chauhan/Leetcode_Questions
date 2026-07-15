class Solution {
public:

    int gcd(int a, int b) {
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    int gcdOfOddEvenSums(int n) {
      int a=0;
      int b=0;
      for(int i=0; i<=2*n; i++){
        if(i%2==0) a += i;
        else b += i;
      }
      int x= gcd(a, b);
      return x;
    }
};