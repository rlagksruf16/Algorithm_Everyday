BFS

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

const int MAX = 100001;


int visit[MAX] = {0,};
//int road[MAX] = {0,};

queue<int> q;


void bfs(int x) {
    visit[x] = 1;
    q.push(x);
    
    while(!q.empty()) {
        int a = q.front();
        q.pop();
        
        int dx[3] = {a + 1, a - 1, 2*a};
        
        for(int i = 0 ; i < 3; i++) {
            int next = dx[i];
            
            if( 0 <= next && next <= MAX) {
                if(visit[next] == 0 ) {
                    q.push(next);
                    visit[next] = visit[a] + 1;
                }
            }
        }
        
        
        
    }
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K;
    
    cin >> N >> K;
    
    bfs(N);
    
    cout << visit[K] - 1 <<endl;
    
    return 0;
}
