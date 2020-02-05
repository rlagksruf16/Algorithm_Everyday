// Queue with 요세푸스


#include <iostream>
#include <math.h>
#include <queue>



using namespace std;

int main() {

    int N, K;
    queue<int> q;
    queue<int> final;
    cin >> N >> K;
    
    for(int i = 1; i <= N; i++) {
        q.push(i);
    }
    
    while(!q.empty()) {
        for(int i = 0 ; i < K-1; i++) {
            q.push(q.front());
            q.pop();
        }
        final.push(q.front());
//        cout << q.front() << endl;
        q.pop();
    }
    cout << '<';
    for(int i = 0; i < N-1; i++) {
        cout << final.front() << ", ";
        final.pop();
    }
    cout << final.front() << '>';
    
    
    return 0;
}
