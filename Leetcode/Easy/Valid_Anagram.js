var isAnagram = function(s, t) {
    let h = new Map(); // map 정의
    let leng = s.length; //s 길이
    let lengt = t.length; // t 길이
    
    if(leng !== lengt) //길이 다른 경우
        return false;
    
    for(let i = 0; i < leng; i++) { // map 설정
        if(h.has(s[i]))
            h.set(s[i],h.get(s[i])+1);
        else
            h.set(s[i],1);
    }
    for(let j = 0; j < t.length; j++) { // map 확인
        if(h.has(t[j]))
            h.set(t[j],h.get(t[j])-1);
        else
            return false;
    }
    
    let arr = [...h]; // 2차원 배열로 변경
    
    for(let q = 0; q < h.size; q++) { // 남아있는지 여부 확인
        if(arr[q][1] !== 0)
            return false;
    }
    return true;
};