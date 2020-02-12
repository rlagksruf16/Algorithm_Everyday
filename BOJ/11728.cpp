#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    int N;
    int M;
    
    
    
    cin >> N >> M;
    
    int a[N];
    int b[M];
    int c[N+M];
    
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for(int j = 0; j < M; j++) {
        cin >> b[j];
    }
    
    int x = 0;
    int y = 0;
    int z = 0;
    
    while( x < N && y < M) {
        if(a[x] < b[y]) {
            c[z] = a[x];
            z++;
            x++;
        }
        else {
            c[z] = b[y];
            z++;
            y++;
        }
    }
    while( x < N) {
        c[z] = a[x];
        z++;
        x++;
    }
    while( y < M) {
        c[z] = b[y];
        z++;
        y++;
    }
    
    for(int t = 0; t < N+M; t++) {
        printf("%d ", c[t]);
    }
    
    
    
    
    return 0;
}

