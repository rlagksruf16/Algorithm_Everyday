int MOD = 20170805;
​
int V[501][501]; // i행 j열에서 아래쪽으로 갈 수 있는 경우의 수
int H[501][501]; // i행 j열에서 오른쪽으로 갈 수 있는 경우의 수
​
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int m, int n, vector<vector<int>> city_map) {
    int answer;
    memset(V, 0, sizeof(V));
    memset(H, 0, sizeof(H));
    
    V[1][1] = H[1][1] = 1;
    for (int i=1 ; i<=m ; i++) {
        for (int j=1 ; j<=n ; j++) {
            if (city_map[i-1][j-1] == 0) {
                V[i][j] += (V[i-1][j] + H[i][j-1]) % MOD;
                H[i][j] += (V[i-1][j] + H[i][j-1]) % MOD;
            } else if (city_map[i-1][j-1] == 1) {
                V[i][j] = 0;
                H[i][j] = 0;
            } else {
                V[i][j] = V[i-1][j];
                H[i][j] = H[i][j-1];
            }
        }
    }
    return V[m][n] % MOD;
}