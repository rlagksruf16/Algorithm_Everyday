var numSquares = function(n) {
    var t = [ ];
        var nums = 1;
        for(var i = 1; i < n+1; i++) {
            if(i == nums*nums) {
                t[i] = 1;
                nums += 1;
            }
            else {
                var mins = i;
                for(var j = nums-1; j > 0; j--) {
                    mins = Math.min(mins,1+t[i-j*j]);
                }
                t[i] = mins;
            }
        }
    return t[n];
};
