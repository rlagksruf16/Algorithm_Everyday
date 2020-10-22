// Greedy

#include <algorithm>
#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    
    string s; // 숫자들
    cin >> s;
    
    deque<char> q; // 숫자들을 담은 deque
    for(int i = 0; i < s.length(); i++) {
        while(K && !q.empty() && q.back() < s[i]) {
            q.pop_back();
            K--;
        }
        q.push_back(s[i]);
    }
    for(int i = 0; i < q.size() - K; i++)
        cout << q[i];
    
    return 0;
}
