var trap = function(height) {
    let leng = height.length; // 배열 길이
    let ans = 0; // 정답
    let l = 0;
    let r = leng-1;
    let lm = 0;
    let rm = 0;
    
    while(l <= r) {
        lm = Math.max(height[l], lm);
        rm = Math.max(height[r], rm);
        
        if(lm > rm) { // 더 작은게 움직여야 함 
            ans += rm - height[r];
            r--
            console.log(ans)
        }
        else {
            ans += lm - height[l];
            l++;
            console.log(ans)
        }
    }
    return ans;
    
};