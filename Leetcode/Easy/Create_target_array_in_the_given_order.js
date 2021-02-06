var createTargetArray = function(nums, index) {
    let t = [];
    
    // 원하는 장소에 insert하기
    for(let i = 0; i < nums.length; i++) {
        t.splice(index[i],0,nums[i]);
    }
    return t;
};