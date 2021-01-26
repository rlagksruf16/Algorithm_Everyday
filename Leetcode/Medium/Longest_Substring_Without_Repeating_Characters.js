var lengthOfLongestSubstring = function(s) {
    let temp = [];
    let maxLength = 0;
    for(let i = 0; i < s.length; i++) { // string 안 모든 알파벳 반복
        if(temp.includes(s[i])) { // 포함되면 == 겹치는게 있으면
            let index = temp.findIndex((v) => v === s[i]); // 위치
            temp = temp.slice(index+1); // 잘라서
            temp.push(s[i]); // 넣기
        } 
        else { // 포함 안되면
            temp.push(s[i]); // 넣기
        }
        maxLength = Math.max(maxLength, temp.length); // 어느게 긴기 비교
    }
    return maxLength;
};