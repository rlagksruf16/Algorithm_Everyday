function solution(n, arr1, arr2) {
    var answer = [];
    
    for(let i = 0; i < n; i++) {
        
        // 2진수로 변환
        let a1 = arr1[i].toString(2);
        let a2 = arr2[i].toString(2);
        
        // 나머지 0 채워주기
        while(a1.length !== n) {
            a1 = '0'+a1;
        }
        while(a2.length !== n) {
            a2 = '0'+a2;
        }
        
        // 비밀지도 만들기 
        let tmp = '';
        for(let j = 0; j < n; j++) {    
            if(a1[j] === '1' || a2[j] === '1')
                tmp = tmp + '#';
            else
                tmp = tmp + ' ';
        }
        answer.push(tmp);
    }
    
    return answer;
}