#include<iostream>
#include<string>
#include<cstring>
#define MAX 1001

using namespace std;

char S[MAX], Q[MAX]; //문자열 
int DP[MAX][MAX];

int Bigger(int a, int b) { 
	if (a > b) 
		return a; 
	return b; 
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> S >> Q; // 두 문자열
	
	int s_Size = strlen(S); //길이
    int q_Size = strlen(Q); //길이

    for (int i = 1; i <= s_Size; i++) {
	    for (int j = 1; j <= q_Size; j++) {
	        if (S[i - 1] == Q[j - 1]) { // 같으면
                DP[i][j] = DP[i - 1][j - 1] + 1; // 길이 + 1
            }
            else { // 다르면 
	            DP[i][j] = Bigger(DP[i - 1][j], DP[i][j - 1]); // 그 전꺼 두개중에서 큰 거 비교
            }
        }
	}
	cout << DP[s_Size][q_Size] << endl;

    return 0;
}
