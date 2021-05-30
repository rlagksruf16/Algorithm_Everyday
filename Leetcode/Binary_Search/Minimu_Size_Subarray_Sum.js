var minSubArrayLen = function(target, nums) { // two pointer
    let leng = nums.length;
    let left = 0;
    let ans = 987654321;
    let tmp = 0;
    
    for(let i = 0; i < leng; i++) {
        tmp += nums[i];
        
        while(tmp >= target) {
            ans = Math.min(i+1-left , ans);
            tmp -= nums[left];
            left++;
        }
    }
    if(ans == 987654321)
        return 0;
    else
        return ans;
};