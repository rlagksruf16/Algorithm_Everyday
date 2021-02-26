var arrayPairSum = function(nums) {
    let leng = nums.length;
    let ans = 0;
    
    function sort1(a,b) {
        return a-b;
    }
    
    nums.sort(sort1);
    
    for(let i = 0; i < leng; i += 2) {
        ans += nums[i];
    }
    
    return ans;
};