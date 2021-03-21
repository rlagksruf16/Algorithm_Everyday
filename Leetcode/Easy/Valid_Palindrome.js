var isPalindrome = function(s) {
    s=s.replace(/[^a-z0-9]+/gi,'').toLowerCase();
    
    let start = 0;
    let end = s.length -1;
    let palin = true;
    
    while(start <= end) {
        if(s[start] == s[end]) {
            start +=1;
            end -=1;
        }
        else {
            palin = false;
            break;
        }
    }
    
    return palin
};