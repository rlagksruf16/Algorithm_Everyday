var climbStairs = function(n) {
    if(n == 0 || n == 1)
        return 1;
    var f = 1;
    var s = 2;
    for(var i = 3; i <= n; i++) {
        var t = f + s;
        f = s;
        s = t;
    }
    return s;
};