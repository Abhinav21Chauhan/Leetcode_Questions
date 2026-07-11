class Solution {
public:
    string defangIPaddr(string address) {
        string s = "";
        for(int i =0;i<address.size(); i++){
            char ch  = address[i];
            if(!isdigit(ch)){
                s += "[.]";
            }
            else s += address[i];
        }
        return s;
    }
};