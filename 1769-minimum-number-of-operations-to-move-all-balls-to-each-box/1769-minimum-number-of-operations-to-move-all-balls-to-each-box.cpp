class Solution {
public:
    vector<int> minOperations(string boxes) {
       vector<int> v;
       for(int i=0; i<boxes.length(); i++){
        int sum=0;
        for(int j=0; j<boxes.length(); j++){
            if(boxes[j] == '0') continue;
            else sum += abs(j-i);
        }
        v.push_back(sum);
       }
       return v;
    }
};