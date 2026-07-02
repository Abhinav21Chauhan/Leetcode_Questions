class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int mx = 0;
      for (int j = 0; j < sentences.size(); j++) {
        string s = sentences[j];
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
                count++;
            }
            mx = max(mx, count);
        }
    }

    return mx;
    }
};