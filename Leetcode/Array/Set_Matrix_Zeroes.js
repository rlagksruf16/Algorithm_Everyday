/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
 var setZeroes = function(matrix) {
    const r = matrix.length;
    const c = matrix[0].length;
    
    let tmp = []; // 0인 x,y 좌표 저장 배열
    
    
    for(let i = 0; i < r; i++) {
        for(let j = 0; j < c; j++) {
            if(matrix[i][j] === 0)
                tmp.push([i,j]); // 0이면 저장
        }
    }
    
    for(let a of tmp) {
        let tx = a[0];
        let ty = a[1];
        
        for(let i = 0; i < r; i++) {
            if(matrix[i][ty] !== 0)
                matrix[i][ty] = 0;
        }
        for(let j = 0; j < c; j++) {
            if(matrix[tx][j] !== 0)
                matrix[tx][j] = 0;
        }
        
    } 
    return matrix;
};