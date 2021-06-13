/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
 var searchMatrix = function(matrix, target) {
    const r = matrix.length;
    const c = matrix[0].length;
    
    let j = c-1;
    
    for(let i = 0; i < r; ++i) {
        if(matrix[i][j] === target || (matrix[i][j] > target && binarySearch(matrix[i], target)))
            return true;
    }
    return false;
};
    
    
let binarySearch = (arr, target) => {
    let start = 0;
    let end = arr.length-1;
    let mid;
    
    while(start <= end) {
        mid = Math.floor((start+end)/2);
        
        if(target === arr[mid])
            return true;
        else if(target < arr[mid])
            end = mid-1;
        else
            start = mid+1;
    }
    return false;
}