var findContentChildren = function(g, s) {
    if(s.length === 0)
        return 0;
    
    // 오름차순 정렬
    g.sort((a,b) => b-a);
    s.sort((a,b) => b-a);
    
    let count = 0;
    let tmp = 0;
    
    for(let i = 0; i < g.length; i++) {
        for(let j = tmp; j < s.length; j++) {
            if(g[i] <= s[j]) {
                count += 1;
                tmp = j+1;
                break;
            }
        }
    }
    return count;
};