var uniquePaths = function(m, n) {
    // 블록이 1개인 경우
    if(m == 1 && n == 1) 
        return 1;
    
    // 2차원 배열 정의
    var arr = new Array(m);

    for (var i = 0; i < arr.length; i++) {
        arr[i] = new Array(n);
    }
    
    // 1로 초기화 작업
    for(let k = 0; k < n; k++) {
        arr[0][k] = 1;
    }
    for(let z = 0; z < m; z++) {
        arr[z][0] = 1;
    }
    
    // 블록이 다수인 경우  
    for(let i = 1; i < m; i++) {
        for(let j = 1; j< n; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    return arr[m-1][n-1];
};