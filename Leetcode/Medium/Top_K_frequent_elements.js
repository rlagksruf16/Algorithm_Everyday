var topKFrequent = function(nums, k) {
    let t = new Map();
    let temp = [];
    
    for(let i = 0; i < nums.length; i++) {
        if(t.has(nums[i]))
            t.set(nums[i], t.get(nums[i])+1);
        else
            t.set(nums[i],1);
        
    }
    let a = [...t]; // array like object를 array로 변환 ES6
    a.sort((a,b) => b[1] - a[1]);
    
    for(let j = 0; j < k; j++) {
        temp.push(a[j][0]);
    }
    
    
    return temp;
};