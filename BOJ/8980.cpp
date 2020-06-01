#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, C; // 마을 수, 용량
    int num; // 배송 횟수
    vector<pair<pair<int,int>,int>> v; // 시작, 도착, 용량 저장 vector
    
    cin >> N >> C; // 입력받기

    cin >> num; // 입력
    
    int s, a, w; // s -> 시작, a -> 끝, w -> 무게
    for(int i = 0 ; i < num; i++) { // 저장
        cin >> s >> a >> w;
        v.push_back(make_pair(make_pair(a,s),w)); // 끝을 기준으로 정렬하기 위해 v에 엇갈리게 넣어줌
    }
    
    sort(v.begin(),v.end()); // 정렬
    
//    cout << "------" << endl;
//    for(int i = 0 ; i < num; i++) { // test code
//        cout << v[i].first.second << " " << v[i].first.first << " " << v[i].second << endl;
//    }
    
    int result = 0; // 총 결과
    int arr[N-1]; // 각 도시별 저장 용량 배열
    
    for(int i = 0; i < N-1; i++) { // 배열에 수용 용량 넣기
        arr[i] = C;
    }
    
    for(int i = 0; i < v.size(); i++) { // 반복문 돌려줌
        int mins = arr[v[i].first.second-1]; // 남은 용량 최솟값 찾기
        for(int j = v[i].first.second+1; j < v[i].first.first; j++) {
            if( mins > arr[j-1])
                mins = arr[j-1];
        }
        if(v[i].second <= mins) { // 최솟값이 적재할 것 보다 훨씬 크다
            result += v[i].second;
            for(int q = v[i].first.second; q < v[i].first.first; q++) {
                arr[q-1] -= v[i].second;
            }
        }
        if(v[i].second > mins && mins!= 0) { // 최솟값이 적재할 것 보다 작다 
            result += mins;
            for(int q = v[i].first.second; q < v[i].first.first; q++) {
                arr[q-1] -= mins;
            }
        }
    }
    cout << result;
    
    return 0;
}