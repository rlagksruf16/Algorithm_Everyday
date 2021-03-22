var removeDuplicates = function(nums) {
    let start = 0;
    let end = 0;
    let leng = nums.length;
    
    if(leng === 0) // 배열의 길이가 0일 경우
        return 0;
    
    while(end < leng) {
        if(nums[start] !== nums[end]) {
            start++;
            nums[start] = nums[end];
            end++;
        }
        else
            end++;
        
    }
    return start+1;
    
};