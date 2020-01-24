// 여러개의 정수들의 GCD의 합 구하는 문제

#include <iostream>

using namespace std;

int gcd(int x, int y);

int main() {
    
    int t;
    
    cin >> t;
    
    int A[101];
    
    
    
    for(int i = 0; i < t; i++) {
        int n = 0;
        long long sum = 0;
        cin >> n;   // 숫자 갯수 입력 받기
        
        for(int x = 0; x < n; x++) {
            cin >> A[x];
        }
        
        for(int y = 0; y < n-1; y++) {
            for(int z = y+1; z < n; z++) {
                sum += gcd(A[y], A[z]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}


int gcd(int x, int y) {
    while(y!=0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}
