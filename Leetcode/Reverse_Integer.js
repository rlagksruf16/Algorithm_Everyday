var reverse = function(x) {
    var tmp = parseInt(x.toString().split('').reverse().join(''))
    
    if ( tmp > 2147483647 || tmp < -2147483648 ) { 
        return 0;
    }
    if(x > 0)
        return tmp
    else
        return -tmp;
    
};