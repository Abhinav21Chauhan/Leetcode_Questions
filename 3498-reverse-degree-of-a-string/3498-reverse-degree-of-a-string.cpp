class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
       for(int i=0; i<s.length(); i++){
        int x = 27 - (s[i]-'a'+1);
        sum += (x*(i+1));
       } 
       return sum;
    }
};