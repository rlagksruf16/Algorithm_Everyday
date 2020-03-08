// 미로탐색 , BFS

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <utility>

using namespace std;

int map[101][101];
int N, M;
int visit[101][101] = {0,};

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

void bfs(int x, int y) {
    queue<pair<int, int> > q;
    visit[x][y] = 1;
    q.push(make_pair(x,y));
    
    pair<int, int> a;
    
    while(!q.empty()) {
        a = q.front();
        q.pop();
        
        for(int i = 0 ; i < 4; i++) {
            int nx = a.first + dx[i];
            int ny = a.second + dy[i];
            
            if( 0 <= nx && nx < N && 0 <= ny && ny < M ) {
                if(visit[nx][ny] == 0 && map[nx][ny] == 1){
                    q.push(make_pair(nx, ny));
                    visit[nx][ny] = visit[a.first][a.second] + 1;
                }
            }
        }
    }
    
}
int main() {
    
    ios::sync_with_stdio();
    cin.tie(NULL);
    

    
    cin >> N >> M;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%1d", &map[i][j]);
        }
    }
    
    //test용
    //cout << map[0][0] << " " << map[1][1];
    
    bfs(0,0);
    
    
    cout << visit[N-1][M-1];
    
    
    return 0;
}
