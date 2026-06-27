class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int mx=0;
      int buy = prices[0];
      for(int i=1; i<prices.size(); i++){
        if(prices[i]<buy) buy = prices[i];
        else{
            int a = abs(prices[i]-buy);
            mx = max(mx, a);
        }
      }
      return mx;  
    }
};