class Solution {
public:
    int minimumChairs(string s) {
       int e = 0;
       int mx= 0;
       for(int i=0; i<s.length(); i++){
        if(s[i]=='E') e++;
        else e--;
        mx = max(mx, e);
       }
       return mx; 
    }
};