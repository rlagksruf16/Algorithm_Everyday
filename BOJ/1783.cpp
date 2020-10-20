#include <iostream>
#include <algorithm>

using namespace std;

int N, M; // 세로, 가로


int main(void) {

    cin >> N >> M; // 입력받기

    if (N == 1) //세로 한칸이면 못 움직임
        cout << 1 << endl;

    else if (N == 2) //세로가 두 칸이면 2와 3만 가능
        cout << min(4, (M + 1) / 2) << endl;

    else if (N >= 3) { // 6까지는 최대 4번
        if (M <= 6)
            cout << min(4, M) << endl;
        else //2번 3번 한번씩 나머지는 1번, 4번
            cout << M - 2 << endl;
    }
    return 0;
}