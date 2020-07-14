#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio();
    cin.tie(NULL);
    
    int N; // 단어 갯수
    int counts = 0; // 답 저장
    int temp = 0;
    
    cin >> N;
    
    // 단어 갯수만큼 반복
    for(int i = 0; i < N; i++) {
        string a;
        vector <char> v; // 알파벳 저장 벡터
        
        temp = 0;
        cin >> a;
        
        v.push_back(a[0]);
        
        // 각 단어 길이만큼 반복
        for(int j = 1 ; j< a.size(); j++) {
            if(a[j] != a[j-1]) {
                if (std::find(v.begin(), v.end(), a[j]) !=v.end()) {
                    temp = 1;
                    break;
                }
            }
            v.push_back(a[j]);
        }
        if(temp == 0)
            counts++;
        
    }
    cout << counts;
    
    return 0;
}