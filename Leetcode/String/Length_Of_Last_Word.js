/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let leng = s.length; // 길이
    let res = 0; // 결과값
    let st = 0;
    
    if(s === ' ')
        return 0;
    
    let rev = s.split('').reverse().join(''); // 문자열 뒤집기
    
    while(rev[st] === ' ') // 공백 삭제용 반복문
        st++;
    
    for(let i = st; i < leng; i++) {        
        if(rev[i] === ' ')
            break;
        else
            res++;
    }
    return res;
};