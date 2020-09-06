function check(stones,mid,k) {
    let n = 0;
    for(let i = 0; i < stones.length; i++) {
        if(stones[i] < mid) {
            n += 1;  
        }
        else
            n = 0;
        if(n >= k ) {
            return false;
        }
    }
    return true;
}

function solution(stones, k) {
    let left = 1;
    let right = 200000000;
    
    while(left < right-1) {
        let mid = parseInt((left + right) / 2);
        if(check(stones,mid,k)) {
            left = mid;
        }
        else
            right = mid;
    }
    
    return left;
}