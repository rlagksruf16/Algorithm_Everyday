function solution(citations) {
    var answer = 0;
    let leng = citations.length;
    
    citations = citations.sort((a,b) => b-a); // 오름차순 sort
    let ind = 1;
    while(ind <= citations[ind-1])
        ind++;
    return ind-1;
}