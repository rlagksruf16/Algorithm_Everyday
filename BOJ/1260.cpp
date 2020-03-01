// 기본적인 dfs, bfs

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
const int Max = 1001;

vector<int> adj[Max];
bool visited[Max];
queue<int> q;
bool visit[Max];

void dfs(int start) {
    visited[start] = true;
    
    cout << start << " ";
    
    for(int i = 0; i < adj[start].size() ; i++) {
        int next = adj[start][i];
        
        if(visited[next] == false)
            dfs(next);
    }
}

void bfs(int start) {
    visit[start] = true;
    q.push(start);
    
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        
        cout << x << " ";
        for(int i = 0; i < adj[x].size(); i++) {
            int next = adj[x][i];
            if(!visit[next]) {
                visit[next] = true;
                q.push(next);
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, V;
    
    cin >> N >> M >> V;
    
    // 넣어주기
    for(int i = 0; i < M; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        adj[a1].push_back(a2);
        adj[a2].push_back(a1);
    }
    
    for(int i = 0 ; i <= N; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    
    dfs(V);
    
    cout << "\n";
    
    bfs(V);
    
    return 0;
}

