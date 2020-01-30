
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int main() {
    
    stack<int> a; // stack
    stack<int> re; // 남은 것들을 저장하는 stack
    int N;
    
    int num = 1;  // 1부터 정수들
    
    cin >> N;
    
    int A[N]; // 입력한 숫자들을 저장할 배열

    
    for(int i = N-1; i >=0 ; i--) {
        cin >> A[i];
    }
    
    //테스트용
//    for(int i = 0 ; i < N; i++)
//        cout << A[i] << endl;
    
    int j = 0;
    while( num <= N) {
        if(A[j] > A[j+1] && A[j] != N) {
            cout << "No" << "\n";
            return 0;
        };
        if(num == A[j] && num == j+1) {
            a.push(num);
            cout << "+" << "\n";
            j++;
        }
        else if(num != A[j]) {
            a.push(num);
            cout << "+" << "\n";
        }
        else if(num == A[j] && num != j+1){
            int remain = A[j] - A[j-1] - 1; // 문제
            while(remain != 0 ) {  // 문제
                
                re.push(a.top());
                a.pop();
                cout << "-" << "\n";
                remain--;
            }
            a.push(num);
            cout << "+" << "\n";
            j++;
        }
        num++;
    }
    
    while(!a.empty()) {
        a.pop();
        cout << "-" << "\n";
    }
    
    return 0;
    
}
