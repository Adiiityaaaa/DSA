class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int lowestPrice = prices[0];
        int maxProfit = 0;


        for( int i=1; i<n; i++) {
            if(prices[i] < lowestPrice) {
                lowestPrice = prices[i];
            }

            if( prices[i] - lowestPrice > maxProfit) {
                maxProfit =  prices[i] - lowestPrice;
            }
        }

        return maxProfit;
    }
};