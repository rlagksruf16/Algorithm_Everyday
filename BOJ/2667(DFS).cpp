// dfs 버전

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;

const int Max = 26;

bool visit[Max][Max];
int house[Max][Max];
int N;
int counts;
vector<int> v;


int dx[] = { 0, 0, -1, 1};
int dy[] = { 1, -1, 0 ,0};

void dfs(int x, int y) {
    visit[x][y] = true;
    counts++;
    
    for(int i = 0; i < 4; i++) {
        int xi = x + dx[i];
        int yi = y + dy[i];
        
        if( 0 <= xi && xi < N && 0 <= yi && yi < N) {
            if(visit[xi][yi] == false && house[xi][yi] == 1)
                dfs(xi,yi);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%1d", &house[i][j]);
        }
    }
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(visit[i][j] == false && house[i][j] == 1) {
                counts = 0;
                dfs(i, j);
                v.push_back(counts);
                
            }
        }
    }
    
    cout << v.size() << "\n";
    
    sort(v.begin(), v.end());
    
    for(int i =0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    
    return 0;
}
