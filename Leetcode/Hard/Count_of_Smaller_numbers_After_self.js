var countSmaller = function(nums) {
    var temps = [];
    for(var i = 0; i < nums.length; i++) {
        var t = 0;
        for(var j = i+1; j < nums.length; j++) {
            if(nums[i] > nums[j])
                t += 1;
        }
        temps.push(t);
    }
    return temps;
};