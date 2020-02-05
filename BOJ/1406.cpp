// 이중 stack 이용하는 문제



#include <iostream>
#include <math.h>
#include <stack>



using namespace std;

int main() {

    string N;   // 문자열
    int num; // 입력할 갯수
    stack<char>s; // 스택 정의
    char order; // 명령어
    char A; // 입력한 단어
    char temp;
    stack<char>t;
    
    cin >> N;
    cin >> num;
    
    for(int i = 0; i < N.size(); i++) {
        s.push(N[i]);
    }
    
    for(int i = 0; i < num; i++) {
        cin >> order;
        
        if(order == 'P') {
            cin >> A;
            s.push(A);
        }
        else if(order == 'L') {
            if(s.empty()) {
                continue;
            }
            t.push(s.top());
            s.pop();
        }
        else if(order == 'B') {
            if(s.empty()) {
                continue;
            }
            s.pop();
        }
        else if(order == 'D') {
            if(t.empty())
                continue;
            s.push(t.top());
            t.pop();
        }
    }
    
    while(!s.empty()) {
        t.push(s.top());
        s.pop();
    }
    
    while(!t.empty()) {
        cout << t.top();
        t.pop();
    }
    
    return 0;
}
