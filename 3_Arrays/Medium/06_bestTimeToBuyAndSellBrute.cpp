/*
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int ans = 0;
    int n = prices.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(prices[j] > prices[i])
                ans = max(ans, prices[j] - prices[i]);
        }
    }

    return ans;
}

*/