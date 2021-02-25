var getHint = function(secret, guess) {
    
    let leng = secret.length;
    let a = 0;
    let b = 0;
    let hash = {};
    
    for(let i = 0; i < leng; i++) {
        if(secret[i] == guess[i])
            a++
        else {
            if(secret[i] in hash)
                hash[secret[i]]++;
            else
                hash[secret[i]] = 1;
        }
    }
    
    for(let j = 0; j < leng; j++) {
        if(secret[j] !== guess[j] && hash[guess[j]]) {
            hash[guess[j]]--;
            b++;
        }
    }
    
    return a+"A"+b+"B";
};