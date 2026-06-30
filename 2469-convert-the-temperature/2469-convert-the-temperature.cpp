class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kel = celsius + 273.15;
        double fahr = (celsius*1.80) + 32.00;
        vector<double> ans;
        ans.push_back(kel);
        ans.push_back(fahr);
        return ans;
    }
};