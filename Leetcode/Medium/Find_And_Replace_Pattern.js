var findAndReplacePattern = function(words, pattern) {
    let rlist = []; // 결과 저장 배열
    
    // 단어 리스트 반복
    for(let i = 0; i < words.length; i++) {
        // map 2개 사용
        let pList = new Map();
        let wList = new Map();
        
        //일치 여부 판단 변수
        let same = true;
        
        // 한 단어 반복, 양쪽 map에 서로 존재해야 일치 하나라도 일치하지 않으면 탈락
        for(let j = 0; j < pattern.length; j++) {
            if(pList.has(pattern[j]) && pList.get(pattern[j]) !== words[i][j] ) {
                same = false;
                break;
            }
            if(wList.has(words[i][j]) && wList.get(words[i][j]) !== pattern[j]) {
                same = false;
                break;
            }
            
            pList.set(pattern[j], words[i][j]);
            wList.set(words[i][j], pattern[j]);
        }
        if(same == true)
            rlist.push(words[i]);
    }
    return rlist;
};