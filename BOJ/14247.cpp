//Greedy

#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    typedef long long ll;

    int n; // 나무 갯수
    cin >> n; // 입력
    ll total = 0; // 총 나무 갯수
    vector<int> v;
    
    for(int i = 0; i< n; i++) { // 앞 나무들 더해주기
        int tmp;
        cin >> tmp;
        total += tmp;
    }
    
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    sort(v.begin(),v.end());
    
    for(int i = 0; i < n; i++) {
        total += v[i]*i;
    }
    cout << total;
    
    return 0;
}
