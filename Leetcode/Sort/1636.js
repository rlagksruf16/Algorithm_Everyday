var frequencySort = function(nums) {
    let maps = new Map();
    let vals = 0;
    
    for(let i = 0; i < nums.length; i++) {
        if(maps.has(nums[i]))
            vals = maps.get(nums[i]);
        else
            vals = 0;
        
        maps.set(nums[i],vals+1);
    }
    
    nums.sort( (a,b) => {
        let x = maps.get(a);
        let y = maps.get(b);
        
        if(x === y)
            return b-a;
        else
            return x-y;
    });
    
    return nums;
};