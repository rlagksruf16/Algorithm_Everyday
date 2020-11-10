#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s; // 문자열
    int counts = 0; // P의 갯수
    
    cin >> s; // 문자열 입력
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'P') {
            counts++;
            continue;
        }
        if(counts >= 2 && s[i+1] == 'P') {
            counts--;
            i++;
        }
        else {
            cout << "NP";
            return 0;
        }
    }
    
    if(counts == 1)
        cout << "PPAP";
    else
        cout << "NP";

    return 0;
}
