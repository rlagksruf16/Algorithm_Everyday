var groupAnagrams = function(strs) {
    const leng = strs.length;
    const setA = new Map();
    
    if(leng === 1)
        return [strs];
    
    for(let i = 0; i < leng; i++) {
        let tmp = strs[i].split("").sort().join("");
        if(setA.has(tmp))
            setA.set(tmp,[...setA.get(tmp), strs[i]]); // 문자열 합치는 ... operator
        else
            setA.set(tmp,[strs[i]]);
    }
    
    const result = [];
    
    for(let a of setA.values()) {
        result.push(a);
    }
    return result;
};