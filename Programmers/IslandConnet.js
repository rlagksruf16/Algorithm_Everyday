function solution(n, costs) {
    let answer = 0; // 최소 cost 합 -> 정답
      isl = []; // 이은 섬들에 대한 정보 저장 배열
      b = []; // 연결한 다리에 대한 정보 저장 배열
      total = 0; //다리 갯수 저장 수
    
    //최대한 적은 비용을 맞추기 위해 비용 순으로 오름차순 정렬
    costs.sort((a, b) => {
        return a[2] - b[2];
    })

    // 가장 적은 비용인 첫번째 것 부터 저장
    isl[costs[0][0]] = true;
    isl[costs[0][1]] = true;
    b[0] = true;
    answer += costs[0][2]; // 정답에 최소 비용(cost) 저장
    total += 2; // 갯수 2개 -> 다리 2개 연결했으니까

    //모든 다리를 다 지을때 까지
    while (total < n) {
      //전체 다리 정보 반복
        for (let i = 1; i < costs.length; i++) {
            let [start, end, cost] = costs[i]; // 1번 다리, 2번 다리, 비용
    
            // 3가지의 예외 상황에 대한 처리
            if (!b[i] &&((isl[start] && !isl[end]) || (!isl[start] && isl[end]))) {
            //해당 섬/다리/비용 정보 추가
            isl[start] = true;
            isl[end] = true;
            b[i] = true;
            answer += cost;
            total++;
            break;
            }
        }
    }

    return answer;
}