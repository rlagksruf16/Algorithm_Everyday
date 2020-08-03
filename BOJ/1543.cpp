/*
    Greedy 문제
    문서 검색 문제 
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string l, s; // 문자열들
    int counts = 0; // 카운트
    
    getline(cin,l); // 한 줄 입력
    getline(cin,s); // 한 줄 입력
    
    if(l.size() < s.size()) {
        cout << 0;
        return 0;
    }
    
    for(int i = 0; i <= l.size() - s.size(); ) {
        bool tmp = true;
        
        for(int j = 0; j < s.size(); j++) {
            if(l[i+j] != s[j]) {
                tmp = false;
                break;
            }
        }
        if(tmp) {
            counts++;
            i = i + s.size();
        }
        else
            i++;
    }
    
    cout << counts;
    
    return 0;
}
