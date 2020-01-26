// simple stack algorithm



#include <iostream>
#include <algorithm>
#include <stack>




using namespace std;

int main() {
    
    stack<int>s;
    
    int N;
    string a;
    int num;
    
    cin >> N;
    
    
    
    for(int i = 0; i < N; i++) {
        cin >> a;
        
        if(a == "push") {
            cin >> num;
            s.push(num);
        }
        else if( a == "pop") {
            
            if(s.empty() == 1)
                cout << -1 << endl;
            else {
                cout << s.top() << endl;
                s.pop();
            }
                
        }
        else if( a == "top") {
            if(s.empty() == 1)
                cout << -1 << endl;
            else
                cout << s.top() << endl;
        }
        else if( a == "size") {
            cout << s.size() << endl;
        }
        else if( a == "empty") {
            cout << s.empty() << endl;
        }
    }

    return 0;
}

