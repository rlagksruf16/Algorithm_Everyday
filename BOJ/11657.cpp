#include <iostream>
#include <vector>

using namespace std;

#define INF 987654321

int dist[502];
vector<pair<int,int>> v[502];

int main(){
    ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

    int N,M;
    cin >> N >> M;

    bool cycle = false;

    for(int i = 0; i < M; i++) { //vector에 넣기
        int n1, n2, w;
        cin >> n1 >> n2 >> w;
        v[n1].push_back(make_pair(n2,w));
    }
    
    for(int i = 1; i <= N; i++) { //무한대로 초기화
        dist[i] = INF;
    }

    dist[1] = 0;
    for(int i = 1; i <= N; i++) { // N-1까지이고 N이 되면 음수 사이클이라는 소리
        for(int j = 1; j <= N; j++) {
            for(auto &n : v[j]) {
                if(dist[j] != INF && dist[n.first] > n.second + dist[j]) {
                    dist[n.first] = n.second + dist[j];
                    if(i == N)
                        cycle = true;
                }
            }
        }
    }
    if(cycle)
        cout << "-1\n";
    else {
        for(int i = 2; i <= N; i++) {
            if(dist[i] == INF)
                cout << "-1\n";
            else
                cout << dist[i] << "\n";
        }
    }
    return 0;
}