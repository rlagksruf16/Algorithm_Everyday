var numberOfMatches = function(n) {
    let matches = 0;
    
    // 우승팀이 나올떄까지
    while(n !== 1) {
        // even
        if(n%2 == 0) {
            matches += n/2;
            n = n/2;
        }
        // odd
        else {
            matches += (n-1)/2;
            n = (n-1)/2 + 1;
        }
    }
    return matches;
};