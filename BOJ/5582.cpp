#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string a, b;

int dp[4002][4002] = { 0, };    // 문자열의 최대 길이는 4000

void sol() {
    cin >> a >> b;

    int answer = 0;

    for (int i = 0; i < a.length(); i++) {
        for (int j = 0; j < b.length(); j++) {
            if (a[i] == b[j]) {
                dp[i + 1][j + 1] = dp[i][j] + 1;

                answer = max(answer, dp[i + 1][j + 1]);
            }
        }
    }

    cout << answer << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sol();

    return 0;
}