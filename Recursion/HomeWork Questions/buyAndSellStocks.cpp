class Solution {
public:

    void maxProfitFinder(vector<int>& prices,int i,int& min_prices,int& max_profit){
        // base case
        if(i >= prices.size()){
            return;
        }

        // ek solution solve karge
        if(prices[i] < min_prices) min_prices=prices[i];
        int todayProfit =prices[i]-min_prices;
        if(todayProfit > max_profit){
            max_profit = todayProfit;
        }

        // RE
        maxProfitFinder(prices,i+1,min_prices,max_profit);

    }

    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int max_profit=INT_MIN;

        maxProfitFinder(prices,0,min_price,max_profit);
        return max_profit;

         
        
    }
};