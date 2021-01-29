var fib = function(n) {
    let fib1 = 0;
    let fib2 = 1;
    let fibn;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    
    for(let i = 1; i < n; i++) {
        fibn = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibn;
    }
    return fibn;
};