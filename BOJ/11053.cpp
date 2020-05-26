// DP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    int N; // 카드 갯수
    cin >> N;
    vector<int> v;
    int s[N];
    int ans = 1;
    
    
    for(int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    for(int i = 0; i < v.size(); i++) {
        s[i] = 1;
        for(int j = 0; j < i; j++) {
            if(v[i] > v[j]) {
                s[i] = max(s[i],s[j]+1);
            }
        }
        ans = max(ans,s[i]);
    }
    cout << ans << endl;
    
    return 0;
}