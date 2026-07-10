class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        
        int profit=0;
        for(int i:prices){
                  buy=min(i,buy);
                  profit=max(profit,i-buy);

        }

        return profit;
    }
};