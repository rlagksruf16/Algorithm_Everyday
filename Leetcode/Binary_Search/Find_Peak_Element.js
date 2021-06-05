/**
 * @param {number[]} nums
 * @return {number}
 */
 var findPeakElement = function(nums) {
    let leng = nums.length;
    
    let l = 0;
    let r = leng-1;
    
    if(leng === 1)
        return nums[0];
    else if(leng === 2)
        return nums[0] < nums[1] ? nums[1] : nums[0];
    
    
    while(l < r) {
        let mid = Math.floor((l+r)/2);
        
        if(nums[mid] > nums[mid+1])
            r = mid;
        else
            l = mid+1;
    }
    
    return l;
};