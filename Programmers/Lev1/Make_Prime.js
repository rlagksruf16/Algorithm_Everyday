function solution(nums) {
    var answer = 0;
    const leng = nums.length;
    
    // 소수 판별
    let isPrime = number => {
        if(number < 2)
            return true;
        for(let i = 2; i < number; i++) {
            if(number % i == 0)
                return false;
        }
        return true;
    }
    
    // 3개의 숫자를 뽑는 방법 (On^3)
    for(let i = 0; i < leng; i++) {
        for(let j = i+1; j < leng; j++) {
            for(let z = j+1; z < leng; z++) {
                let num = nums[i]+nums[j]+nums[z];
                if(isPrime(num))
                    answer++;
            } 
        }
    }
    
    return answer;
}