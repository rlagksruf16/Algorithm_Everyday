var searchInsert = function(nums, target) {
    let left = 0;
    let right = nums.length-1;
    if(target === 0)
        return 0;
    
    while(left <= right) {
        let mid = Math.floor((left+right) / 2);
        
        if(nums[mid] === target)
            return mid;
        else if(nums[mid] < target)
            left = mid+1;
        else
            right = mid-1;
    }
    return right+1;
};