class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n<=0)  return false;
       int x=0;
       while(pow(4,x)<n){
        x++;
       }
       return pow(4,x) == n;
    }
};