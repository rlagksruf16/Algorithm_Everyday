var maxProfit = function(prices) {
    let leng = prices.length;
    
    if(leng === 1)
        return 0;
    
    let max_profit = 0;
    
    for(let i = 0; i < leng-1; i++) {
        if(prices[i] < prices[i+1])
            max_profit += prices[i+1] - prices[i];
    }
    return max_profit;
};