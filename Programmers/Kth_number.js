function solution(array, commands) {
    var answer = [];
    let leng = commands.length;
    
    for(let i = 0; i < leng; i++) {
        let arr = array.slice(commands[i][0]-1,commands[i][1]);
        let arr2 = arr.sort((a,b) => a-b);
        answer.push(arr[commands[i][2]-1]);
    }

    return answer;
}