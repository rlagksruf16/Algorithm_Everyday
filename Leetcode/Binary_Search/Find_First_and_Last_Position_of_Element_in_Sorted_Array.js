var searchRange = function(nums, target) {
    let f = 0;
    let l = 0;
    let answer = [];
    
    f = nums.indexOf(target);
    l = f;
    answer.push(f);
    
    if(f === -1)
        answer.push(-1);
    else {
        while(nums[l] === target) {
            l++;
        }
        answer.push(l-1);
    }
    return answer;
};