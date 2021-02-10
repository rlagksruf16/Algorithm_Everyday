var subtractProductAndSum = function(n) {
    let s = n.toString();
    
    let num1 = 1;
    let num2 = 0;
    
    for(let i = 0; i < s.length; i++) {
        num1 *= s[i];
        num2 += Number(s[i]);
    }
    
    return num1 - num2;
};