var maxProfit = function(prices) {
    var buyPrice = 10001;
    var profits = 0;
    
    for(var i = 0; i < prices.length; i++) {
        if(buyPrice > prices[i])
            buyPrice = prices[i];
        else {
            if(profits < prices[i] - buyPrice)
                profits = prices[i] - buyPrice;
        }
    }
    return profits;
};