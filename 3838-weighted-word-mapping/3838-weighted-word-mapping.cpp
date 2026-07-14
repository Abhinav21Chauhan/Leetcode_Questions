class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(int i=0; i<words.size(); i++){
            int sum=0;
            string temp = words[i];
            for(int j=0; j<temp.length(); j++){
                char ch = temp[j];
                sum += weights[ch - 'a'];
            }
            sum = sum%26;
            char mapped = 'z' - sum;
            ans += mapped;
        }
        return ans;
    }
};