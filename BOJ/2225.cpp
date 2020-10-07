#include<iostream>
#define endl "\n"
#define M 1000000000
using namespace std;

int N, K;
long long DP[201][201]; // DP 이중 배열 설정

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
		
		cin >> N >> K; // 입력받기 

    for (int i = 0; i <= N; i++) {
        DP[1][i] = 1; // 초기 값
    }

    for (int k = 2; k <= K; k++) {
        for (int n = 0; n <= N; n++) {
            for (int i = 0; i <= n; i++) {
                DP[k][n] = DP[k][n] + DP[k - 1][i];
            }
            DP[k][n] = DP[k][n] % M; // 값 구하기
        }
    }

    cout << DP[K][N] << endl;

    return 0;
}