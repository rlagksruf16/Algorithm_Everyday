var maxArea = function(height) {
    let results = 0; //결과
    let f = 0; // 앞 부분
    let l = height.length - 1; // 뒷 부분
    
    // 양쪽에서 비교
    while(l - f > 0) {
        let leng = height[l] > height[f] ? height[f] : height[l];
        let temp = leng * (l - f);
        
        height[l] > height[f] ? f++ : l--;
        results = Math.max(results, temp);
    }
    
    return results;
};