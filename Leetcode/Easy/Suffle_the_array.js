var shuffle = function(nums, n) {
    var listA = nums.slice(0,n);
    var listB = nums.slice(n,nums.length);
    var results = [];
    
    for(var i = 0; i < nums.length/2; i++) {
        results.push(listA[i]);
        results.push(listB[i]);
    }
    return results;
};