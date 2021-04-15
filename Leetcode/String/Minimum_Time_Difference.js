var findMinDifference = function(timePoints) {
    let arr = []; // 시간 저장 배열
    let minTime = 987654;
    
    for(let t of timePoints) { // 시간을 분으로 합치기
        let h = parseInt(t.substring(0,2));
        let m = parseInt(t.substring(3,5));
        let totalTime = h*60 + m;
        arr.push(totalTime);
        
    }
    
    arr.sort((a,b) => a-b); // 오름차순 정렬
    
    for(let i = 0; i < arr.length-1; i++) { //최소 차이 구하는 식
        minTime = Math.min(arr[i+1]-arr[i], minTime);
        // if(arr[i+1] - arr[i] < minTime) {
        //     minTime = arr[i+1] - arr[i];
        // }
    }
    if(arr[0]+1440 - arr[arr.length-1] < minTime)
        minTime = arr[0]+1440 - arr[arr.length-1];
    
    
    return minTime;
};