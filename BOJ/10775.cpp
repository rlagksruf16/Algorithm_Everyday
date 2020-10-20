#include <iostream>
#include <algorithm>

using namespace std;

int g, p, park[100001], inp, cnt;

int find(int x) {
    if (x == park[x])
        return x;
    return park[x] = find(park[x]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> g >> p; // 입력받기
    
		for (int i = 1; i <= g; i++) // 값 넣어주기
        park[i] = i;

    for (int i = 1; i <= p; i++) {
        cin >> inp; // 비행기가 도킹할 수 있는 게이트 범위 입력
        if (find(inp) == 0) {
            break;
        }
        if (find(inp)) {  // 내가 도킹하려는 곳이 가능한지 확인 
            cnt++;
            park[find(inp)] = find(find(inp) - 1);
        }
    }
    cout << cnt;
    return 0;
}