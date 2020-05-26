#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    char c;
    cin >> n >> m;
    
    int a[1001][1001] = {0, }; // 1,0 저장 배열
    int s[1001][1001] = {0, }; // 값들 저장 배열
    
    // 입력
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> c;
            a[i][j] = c - 48;
        }
    }
    
    // 최대 크기 값
    int maxA = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(a[i-1][j-1] == 1) {  // 값이 0이면 최대 사각형은 무조건 0
                s[i][j] = min({s[i-1][j], s[i-1][j-1], s[i][j-1]}) + 1;
                if(maxA < s[i][j])
                    maxA = s[i][j];
            }
        }
    }
    
    cout << maxA * maxA << endl;
    
    return 0;
}