var maximumWealth = function(accounts) {
    var maxWealth = 0;
    for(var i = 0; i < accounts.length; i++) {
        var tem = 0;
        for(var j = 0; j < accounts[i].length; j++) {
            tem += accounts[i][j];
        }
        if(tem > maxWealth)
            maxWealth = tem;
    }
    return maxWealth;
};