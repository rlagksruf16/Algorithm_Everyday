/**
 * @param {number[][]} pairs
 * @return {number}
 */
var findLongestChain = function(pairs) {
    pairs = pairs.sort( (a,b) => a[0] - b[0] ); // 오름차순 정렬
    
    let tmpArr = [...Array(pairs.length)].fill(1);
    
    for(let i = 0; i < tmpArr.length; i++) {
        let max = 0;
        for(let j = 0; j < i; j++) {
            if(pairs[j][1] < pairs[i][0])
                max = Math.max(max,tmpArr[j]); 
        }
        tmpArr[i] = max+1;
    }
    return Math.max(...tmpArr);
};