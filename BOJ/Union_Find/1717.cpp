#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N,M,s,a,b;

vector<int> parent, nod;

int find(int z) {
    if(parent[z] == z)
        return z;

    return parent[z] = find(parent[z]);
}

void merge(int x, int y) {
    x = find(x);
    y = find(y);
    
    if(x == y)
        return;
    
    if(nod[x] < nod[y])
        parent[x] = y;
    else if(nod[x] > nod[y])
        parent[y] = x;
    else {
        parent[y] = x;
        nod[x]++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    cin >> N >> M;
    
    for(int i = 0; i <= N; i++) {
        parent.push_back(i);
        nod.push_back(1);
    }
    for(int j = 0; j < M; j++) {
        cin >> s >> a >> b;
        
        if(s == 0) { // merge
            merge(a,b);
        }
        else {
            if(find(a) == find(b))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
