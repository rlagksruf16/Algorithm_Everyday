var numJewelsInStones = function(jewels, stones) {
    var  counts = 0;
    for(var i = 0; i < jewels.length; i++) {
        for(var j = 0; j < stones.length; j++) {
            if(jewels[i] == stones[j])
                counts++;
        }
    }
    return counts;
};