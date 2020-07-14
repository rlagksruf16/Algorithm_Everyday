// 문자열 문제 
/*
    숫자를 문자열로 입력받고
    6,9일 경우를 일단 제외한 부분에 대해서 최댓값 구하기
    그 후 6,9인 부분을 합쳐서 이전의 최댓값과 비교하여 최댓값 구하기
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio();
    cin.tie(NULL);
    
    int counts[10] = {0,};
    int m = 0;
    string s;
    
    cin >> s;
    
    for(int i = 0; i < s.size(); i++) {
        counts[s[i] - '0']++;
    }
    
    for(int i = 0; i < 10; i++) {
        if(i == 6 || i == 9)
            continue;
        if(m < counts[i])
            m = counts[i];
    }
    if((counts[6] + counts[9] + 1) / 2 < m)
        cout << m;
    else
        cout << (counts[6] + counts[9] + 1) / 2;
    return 0;
}