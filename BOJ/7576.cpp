// 2차원 토마토 DFS, BFS 

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int e, d;
//int counts;
int N, M;

int visit[1001][1001] = {0,};

int box[1001][1001];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
queue<pair<int, int> > q;

void bfs() {
    
//    visit[x][y] = 1;
//    q.push(make_pair(x,y));
    
    pair<int, int> a;
    
    while(!q.empty()) {
        a = q.front();
        q.pop();
        
        for(int i = 0; i < 4; i++) {
            int nx = a.first + dx[i];
            int ny = a.second + dy[i];
            
            if( 0 <= nx && nx < N && 0 <= ny && ny < M) {
                if(visit[nx][ny] == 0 && box[nx][ny] == 0) {
                    q.push(make_pair(nx,ny));
                    visit[nx][ny] = visit[a.first][a.second] + 1;
                    box[nx][ny] = 1;
//                    cout << nx << " " << ny << endl;
//                    counts++;
                }
//                counts++;
            }
        }
    }
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> M >> N;
//    counts = 0;
    int maxA = 0;
    int target = 0;
    
    for(int i =0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> box[i][j];
        }
    }
    
    for(int i =0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(box[i][j] == 1) {
                q.push(make_pair(i,j));
            }
        }
    }
//    cout << d << " " << e << endl;
    bfs();

//    for(int i =0; i < N; i++) {
//        for(int j = 0; j < M; j++) {
//            cout << box[i][j] << " ";
//        }
//        cout << endl;
//    }
    
    
    for(int i =0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(box[i][j] == 0)
                target = -1;
            else if(visit[i][j] > maxA)
                maxA = visit[i][j];
        }
    }

    if(target == -1)
        cout << target;
    else
        cout << maxA;

    return 0;
}
