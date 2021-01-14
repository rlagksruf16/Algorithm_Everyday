var kidsWithCandies = function(candies, extraCandies) {
    
    var maxCandies = 0;
    var results = [];
    
    for(var j = 0; j< candies.length; j++) {
        if(candies[j] > maxCandies)
            maxCandies = candies[j];
    }
    
    for(var i = 0; i < candies.length; i++) {
        if(candies[i] + extraCandies >= maxCandies)
            results.push(1);
        else
            results.push(0);
    }
    
    return results;
};