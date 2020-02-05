
#include <iostream>
#include <math.h>
#include <stack>
#include <queue>



using namespace std;

int main() {

    int N; // loop 를 돌 갯수
    string order; // 명령어
    int num; // 입력 숫자
    queue<int> q;
    cin >> N;
    
    for(int i=0; i < N; i++) {
        cin >> order;
        if(order == "push") {
            cin >> num;
            q.push(num);
        }
        else if(order == "pop") {
            if(q.empty())
                cout << -1 << endl;
            else {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if(order == "size") {
            cout << q.size() << endl;
        }
        else if(order == "empty") {
            cout << q.empty() << endl;
        }
        else if(order == "front") {
            if(q.empty())
                cout << -1 << endl;
            else
                cout << q.front() << endl;
        }
        else if(order == "back") {
            if(q.empty())
                cout << -1 << endl;
            else
                cout << q.back() << endl;
        }
    }
    
    
    return 0;
}
