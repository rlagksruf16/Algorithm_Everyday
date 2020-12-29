#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    int ans = 0;
    int a[101]; // 순서 저장 배열
    
    vector<int> v; // 멀티탭 구멍 확인 vector
    
    cin >> N; // 멀티탭 구멍의 갯수
    cin >> K; // 전기 용품 총 사용횟수
    
    for(int i = 0; i < K; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < K; i++) {
        // 콘센트에 빈 구멍이 있는 경우
        if(v.size() < N) {
            vector<int>::iterator iter = find(v.begin(), v.end(), a[i]);
            if (iter == v.end()) {
                v.push_back(a[i]);
            }
            continue;
        }
        
        // 콘센트에 빈 구멍은 없는데 이미 꼽혀있는 경우
        vector<int>::iterator iter = find(v.begin(), v.end(), a[i]);
        if (iter != v.end()) {
            continue;
        }
        
        // 빈 구멍 없는데 안 꼽혀져 있는 경우
        int val=0, lastidx=0;
        for (int j = 0; j < N; j++) {
            int cnt = 0;
            for (int z = i + 1; z < K; z++) {
                if (a[z] == v[j]) {
                    break;
                }
                cnt++;
            }
            if (cnt > lastidx) {
                val = j;
                lastidx = cnt;
            }
        }
        ans++;
        v[val] = a[i];
    }
    
    cout << ans << endl;
    return 0;
}
