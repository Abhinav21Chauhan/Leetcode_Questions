class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        int x = 0;
        while(pow(3, x) < n) {
            x++;
        }
        return pow(3, x) == n;
        
    }
};