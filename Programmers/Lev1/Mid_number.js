function solution(s) {
    let leng = s.length;
    var answer = '';
    let midIndex = Math.floor(leng/2);
    
    if(leng%2 === 0) { // 짝수
        answer += s[midIndex-1];
        answer += s[midIndex];
    }
    else // 홀수
        answer += s[midIndex];
    
    return answer;
}