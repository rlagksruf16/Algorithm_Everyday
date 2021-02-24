#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

int N, M;
string f1, f2;

int parent[200002];
int nod[200002];

int find(int z) {
    if(parent[z] == z)
        return z;

    return parent[z] = find(parent[z]);
}

int merge(int x, int y) {
    x = find(x);
    y = find(y);
    
    if(x != y) {
        parent[y] = x;
        nod[x] += nod[y];
        nod[y] = 1; // 1로 초기화
    }
    return nod[x];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> M;
        
        map<string,int> f; // map 으로 초기화
        int num = 1;
        
        for(int j = 1; j <= 2*M; j++) {
            parent[j] = j;
            nod[j] = 1;
        }
        for(int z = 0; z < M; z++) {
            cin >> f1 >> f2;
            if(f.count(f1) == 0)
                f[f1] = num++;
            if(f.count(f2) == 0)
                f[f2] = num++;
            
            cout << merge(f[f1],f[f2]);
            cout << "\n";
        }
        
        
    }
    return 0;
}