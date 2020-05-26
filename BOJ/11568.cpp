//DP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N; // 카드 개수
    vector<int> v; // 카드 저장
    
    cin >> N; // 입력
    
    int s[N]; // count 개수 저장
    int ans = 1;
    
    for(int i = 0; i < N; i++) { // 카드 숫자들 넣어주기
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    for(int i = 0; i < N; i++) {
        s[i] = 1; // 초기화 -> 현재 있는 수가 가장 크면 1개
        for(int j = 0; j < i; j++) {
            if(v[i] > v[j]) // 현재 자신의 값보다 작은 경우
                s[i] = max(s[i],s[j]+1); // 갯수 비교해서 저장
        }
        ans = max(ans, s[i]); // s배열에서 가장 큰 길이
    }
    
    cout << ans;
    
    return 0;
}