var rob = function(nums) {
    // 길이 저장
    let leng = nums.length;
    
    //길이가 0일경우, 1일 경우, 2일 경우
    if(leng === 0)
        return 0;
    else if(leng === 1)
        return nums[0];
    else if(leng === 2)
        return Math.max(nums[0],nums[1]);
    
    //dp
    let f = nums[0];
    let q = Math.max(nums[0],nums[1]);
    
    for(var i = 2; i < leng; i++) {
        let maxNum = Math.max(f+nums[i],q);
            f = q;
            q = maxNum;
    }
    return q;
};