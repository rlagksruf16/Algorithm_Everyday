/**
 * @param {number} numBottles
 * @param {number} numExchange
 * @return {number}
 */
 var numWaterBottles = function(numBottles, numExchange) {
    let nums = 0; // 마신 병 갯수
    let empty = 0; // 비어있는 병 갯수
    
    while((numBottles+empty) >= numExchange) {
        nums += numBottles; // 마시기
        empty += numBottles; // 비어있는 것
        if(empty >= numExchange) {
            numBottles = Math.floor(empty / numExchange);
            empty = empty % numExchange;
        }
    }
    nums += numBottles;
    return nums;
};


/* 

 nums: 15, 3
 empty: 3, 3
 numBo: 3,


*/