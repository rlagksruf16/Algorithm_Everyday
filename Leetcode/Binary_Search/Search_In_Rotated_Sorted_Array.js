var search = function(nums, target) {
    let leng = nums.length;
    let ans = 0;
    
    let left = 0;
    let right = leng-1;
    
    // 이분탐색 활용 
    while(left <= right) {
        let mid = Math.floor((left+right)/2); //가운데 인덱스
            
        if(nums[mid] === target)
            return mid;
        
        if(nums[left] <= nums[mid]) { //왼쪽 파트 sorted
            if(nums[left] <= target && target < nums[mid])
                right = mid-1;
            else
                left = mid+1;
        }
        else { // 오른쪽 파트 sorted 형태 
            if(nums[mid] < target && target <= nums[right])
                left = mid+1;
            else
                right = mid-1;
        } 
    }
    return -1;
};