class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(int i=0; i<words.size(); i++){
            string s = words[i];
            bool ok = true;
            for(int j=0; j<s.length(); j++){
                char ch = s[j];
                if (allowed.find(ch) == string::npos) {
                    ok = false;
                    break;
                }
            }
            if(ok) count++;
        }
        return count;
    }
};