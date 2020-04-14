// 그리디, 예상 순서 맞추기

#include <iostream>
#include <algorithm>

using namespace std;

int ranks[500001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N; //사람 수
    
    cin >> N;
    
    
    for(int i = 0; i < N; i++) {
        cin >> ranks[i];
    }
    
    sort(ranks, ranks+N);
    
    long long counts = 0;
    
    for(int i = 1; i <= N; i++) {
        if( i != ranks[i-1]) {
            if( i > ranks[i-1])
                counts += i - ranks[i-1];
            else
                counts += ranks[i-1] - i;
        }
        else
            continue;
    }
    
    cout << counts;
    
    return 0;
}
