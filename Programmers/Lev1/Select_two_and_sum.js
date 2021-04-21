function solution(numbers) {
    var answer = [];
    const leng = numbers.length; // 길이
    
    // 조합 숫자들 중에서 2개 뽑기
    
    let arr = numbers.sort((a,b) => a-b); // 오름차순 sort
    
    for(let i = 0; i < leng; i++) {
        for(let j = i+1; j < leng; j++) {
            let tmp = arr[i] + arr[j];
            if(!answer.includes(tmp))
                answer.push(tmp);
            else
                continue;
        }
    }
    
    answer = answer.sort((a,b) => a-b);
    
    return answer;
}