// 소수 갯수 구하는 문제

#include <iostream>
#include <math.h>

using namespace std;

int decimal(int a);

int main() {

    int N;
    int count = 0;
    int A[101];
    
    // 정수 입력
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for(int y = 0; y < N; y++) {
        if( decimal(A[y]) == 1)
            count++;
    }
    
    cout << count;

    return 0;
}


int decimal(int a) {
    int num = 2;
    
    
    if (a == 1 || a == 0)
        return 0;
    else {
        while(num <= int(sqrt(a))) {
            if(a%num == 0)
                return 0;
            else
                num++;
        }
        return 1;
    };
}
