var majorityElement = function(nums) {
    var temps = [];
    for(var i = 0; i < nums.length; i++) {
        if(!temps[nums[i]])
            temps[nums[i]] = 0;
        temps[nums[i]] += 1;
        if(temps[nums[i]] > nums.length / 2 )
            return nums[i];
    }
};