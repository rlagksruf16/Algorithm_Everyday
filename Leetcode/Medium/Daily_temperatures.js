var dailyTemperatures = function(T) {
    let t = []; // 결과 저장
    let temp = 0; // 온도 저장 변수
    
    for(let i = 0; i < T.length; i++) {
        for(let j = i+1; j < T.length; j++) {
            if(T[i] < T[j]) {
                t.push(j-i);
                break;
            }   
            if(j == T.length-1) // 더 따뜻한 날이 없으면
                t.push(0);
        }
    }
    t.push(0); // 마지막 검사 불가
    return t;
    
    // 시간 초과
    // while(!(T.length == 0)) {
    //     temp = T[0];
    //     var idx = T.findIndex((item, idx) => {
    //         return item > temp;
    //     });
    //     if(idx <= 0)
    //         idx = 0;
    //     t.push(idx);
    //     T = T.slice(1);
    // }
    // return t;
};