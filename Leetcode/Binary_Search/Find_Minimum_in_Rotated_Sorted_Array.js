var findMin = function(nums) {
    let left = 0;
    let right = nums.length-1;
    
    if(nums[left] <= nums[right])
        return nums[left];
    
    while(left <= right) {
        let mid = Math.floor((left+right)/2);
        if(nums[mid] > nums[mid+1])
            return nums[mid+1];
        else if(nums[mid-1] > nums[mid])
            return nums[mid];
        if(nums[mid] > nums[right])
            left = mid+1;
        else
            right = mid-1;
    }
};