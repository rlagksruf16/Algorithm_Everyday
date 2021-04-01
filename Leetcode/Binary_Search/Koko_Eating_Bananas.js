var minEatingSpeed = function(piles, h) {
    
    let l = Math.max(...piles);
    
    if(piles.length === h)
        return l;
    
    let left = 1;
    let right = l;
    
    while(left < right) {
        let time = 0;
        let mid = Math.floor((left+right)/2);
        
        for(let p of piles) {
            if(mid >= p)
                time++;
            else
                time += Math.ceil(p/mid);
        }
        if(time > h)
            left= mid+1;
        else
            right = mid;
    }
    return left;
};