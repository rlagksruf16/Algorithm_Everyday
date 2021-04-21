function solution(arr)
{
    var answer = [];
    const leng = arr.length;

    answer.push(arr[0]);
    
    for(let i = 1; i < leng; i++) {
        if(answer[answer.length-1] !== arr[i])
            answer.push(arr[i])
    }
    
    return answer;
}