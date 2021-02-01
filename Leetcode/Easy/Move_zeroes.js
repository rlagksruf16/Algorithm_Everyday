var moveZeroes = function(nums) {
    
    let leng = nums.length;
    let temp = 0;
    
    for(let i = 0; i < leng; i++) { //반복문 돌려주기
        if(nums[i] != 0) { // 0이 아닌 정수면 넣어주기
            nums[temp] = nums[i];
            temp++;
        }
        else // 0이면 패스
            continue;
    }
        
    
    for(let j = temp; j < leng; j++) { //움직여 준 수만큼 0 추가
        nums[j] = 0;
    }
    return nums;
};