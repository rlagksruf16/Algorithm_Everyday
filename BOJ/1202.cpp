// 그리디 알고리즘 + 힙 정렬 <- 성공 못함

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool com(pair<int, int> a, pair<int, int> b);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k; // 보석 갯수와 가방 갯수
    int wei, price; // 보석 무게와 가격
    int bagWei; // 가방 최대 무게
    
    cin >> n >> k;
    
    vector<pair<int, int>> v; // 보석 정보
    vector<int> w; // 가방 정보
    
    // 보석 정보에 추가
    for(int i = 0; i < n; i++) {
        cin >> wei >> price;
        v.push_back(make_pair(wei, price));
    }
    
    // 가방 정보에 추가
    for(int i = 0; i < k; i++) {
        cin >> bagWei;
        w.push_back(bagWei);
    }
    
    // 가방 정보 오름차순 정리
    sort(w.begin(),w.end());
    
    // 보석 정보 무게 기준 오름차순 정리
    sort(v.begin(),v.end());
    
    int count = 0;
    vector<pair<int , int>> a;
    int result = 0;
    
    for(int i = 0; i < k; i++) {
        
        while(count < n && v[count].first <= w[i]) {
            a.push_back(make_pair(v[count].first, v[count].second));
            count++;
        }
        sort(a.begin(), a.end(), com);
        result += a.back().second;
        a.pop_back();
    }
    
    cout << result;
    
    return 0;
}

bool com(pair<int, int> a, pair<int, int> b) {
    if( a.second < b.second )
        return true;
    else
        return false;
}
