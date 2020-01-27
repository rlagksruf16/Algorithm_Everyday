// 숫자 뒤집기 문제 - 기본적인 stack 활용


#include <iostream>
#include <algorithm>
#include <stack>
#include <string>



using namespace std;

int main() {
    
    stack<char>s;
    int T;
    
    cin >> T;   // 테스트 데이터 갯수
    cin.ignore();   //존재하는 버퍼 제거용
    
    for(int i = 0; i < T; i++) {
        string a;   //입력받을 문장
        
        getline(cin,a); //스페이스까지 입력받기 위한 것
        
        int num = a.size();
        
        
        for(int j = 0; j < num; j++) {
            if(a[j] == ' ') {
                while(!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
                cout << ' ';
            }
            else
                s.push(a[j]);
        }
        while(!s.empty()) {
            cout << s.top();
            s.pop();
        }
        cout << endl;
    }
    
    
    

    return 0;
}

