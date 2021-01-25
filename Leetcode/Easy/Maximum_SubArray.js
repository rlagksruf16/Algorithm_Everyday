var maxSubArray = function(nums) {
    var temps = -100001;
    var parts = 0;
    
    if(nums.length == 1)
        return nums;
    else {
        for(var i = 0; i < nums.length; i++) {
            parts += nums[i];
            temps = Math.max(temps,parts);
            if(parts < 0)
                parts = 0;
        }
    }
    return temps;
};