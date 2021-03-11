#include <iostream>
#include <vector>

using namespace std;

#define INF 987654321

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; // testcase
    int dist[502]; // 길이 저장
    vector<pair<int,int> > v[502];
    
    cin >> T;
    
    while(T--) {
        
        int N, M, W;
        
        cin >> N >> M >> W;
        
        for(int i = 1; i <= N; i++) {
            v[i].clear();
            dist[i] = INF;
        }
        
        for(int i = 0; i < M; i++) { // 도로
            int n1, n2, l;
            cin >> n1 >> n2 >> l;
            v[n1].push_back(make_pair(n2,l));
            v[n2].push_back(make_pair(n1,l));
        }
        
        for(int i = 0; i < W; i++) { // 웜홀
            int n1, n2, l;
            cin >> n1 >> n2 >> l;
            v[n1].push_back(make_pair(n2,-1*l));
        }
        
        for(int i = 1; i <= N; i++) { // 무한대로 초기화
            dist[i] = INF;
        }
        
        bool is_cycle = false;
        
        
        for(int i = 1; i <= N; i++) { // 무한대로 초기화
            for(int j = 1; j <= N; j++) {
                for(auto &n : v[j]) {
                    if(dist[n.first] > n.second + dist[j]) {
                        dist[n.first] = n.second + dist[j];
                        if(i == N)
                            is_cycle = true;
                    }
                }
            }
        }
        if(is_cycle)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}