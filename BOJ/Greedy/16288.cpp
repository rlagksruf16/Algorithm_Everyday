#include <iostream>
#include <vector>
#include <queue>

using namespace std;
queue<int> q[101]; // 입국 심사 큐

#define INF 987654321

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, k, order;
    int pass[101]; // 승객이 입국장 빠져나가는 순서를 담은 배열
    
    cin >> N >> k;
    
    for(int i = 0; i < N; i++) {
        cin >> order;
        pass[i] = order;
    }
    
    for(int i = 0; i < N; i++) {
        bool check = false;
        for(int j = 1; j <= k; j++) {
            if(q[j].empty()) {
                q[j].push(pass[i]);
                check = true;
                break;
            }
            if(q[j].back() < pass[i]) {
                q[j].push(pass[i]);
                check = true;
                break;
            }
        }
        if(!check) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    
    
    return 0;
}
