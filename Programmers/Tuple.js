function solution(s) {
    var answer = [];
    
    // 문자열 분리
    let arrList = s.replace('{{','').replace('}}','').split('},{');
    let setList = [];
    for (let i=0; i<arrList.length; i++){
        setList.push(arrList[i].split(','));
    }
    
    // 크기 순으로 배열을 정렬
    setList.sort((a,b)=>{
        if (a.length>b.length){
            return 1;
        }else{
            return -1;
        }
    })
    
    answer.push(parseInt(setList[0][0]));
    // 각 배열의 요소중에 answer에 없는 요소를 찾고 answer에 저장
    for (let i=1; i<setList.length; i++){
        let tmp = findSet(setList[i],answer);
        answer.push(tmp);
    }
    //console.log(answer,setList);
    return answer;
}

function findSet(t, answer){
    //t과 answer의 모든 요소를 배교해서 answer에 없는 set요소를 찾기
    for (let i=0; i<t.length; i++){
        for (let j=0; j<answer.length; j++){
            t = t.filter(ele=>ele!=answer[j]);
        }
    }
    return parseInt(t[0]);
}