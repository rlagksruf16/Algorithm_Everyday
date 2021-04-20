function solution(n, lost, reserve) {
    var answer = 0;
    
    for(let j = 1; j <= n; j++) {
        if(lost.includes(j) && reserve.includes(j)) {
            lost.splice(lost.indexOf(j),1);
            reserve.splice(reserve.indexOf(j),1);
        }
    }
    
    for(let i = 1; i <= n; i++) {
        if(lost.includes(i) === false) // 도난당하지 않은 학생 
            answer++;
        else { // 도난 당한 학생
            if(i === 1) { // 첫 번째 학생
                if(reserve.includes(i+1) === true) {
                    answer++;
                    reserve.shift();
                }
            }
            else if(i === n) { // 마지막 학생
                if(reserve.includes(i-1) === true) {
                    answer++;
                    reserve.pop();
                }
            }
            else { // 그외 가운데 학생들
                if(reserve.includes(i-1) === true) {
                    answer++;
                    continue;
                }
                if(reserve.includes(i+1) === true) {
                    answer++;
                    let tmp = reserve.indexOf(i+1);
                    reserve.splice(tmp,1);
                }
            }
        }
            
    }
    
    return answer;
}