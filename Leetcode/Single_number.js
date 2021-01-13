var singleNumber = function(nums) {
    var temps = [];
    for(var i = 0; i < nums.length; i++) {
        if(!temps.includes(nums[i]))
            temps.push(nums[i]);
        else
            temps.splice(temps.indexOf(nums[i]),1);
    }
    return temps[0];
};