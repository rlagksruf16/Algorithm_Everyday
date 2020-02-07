
#include <iostream>
#include <math.h>
#include <stack>

using namespace std;

int main() {
    
    stack<char> s;
    char temp; // 앞에 받은 값이 뭔지를 저장하기 위해서 임시로 설정하는 값
//    char a;
    int count = 0;
    int total = 0;
    
    string a;
    
    cin >> a;
    
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '(') {
            s.push(a[i]);
            count++;
        }
        else if(a[i] == ')') {
            s.pop();
            count -= 1;
            if( temp == '(') {
                if(!s.empty()) {
//                    count -= 1;
                    total += count;
                }
                else {
//                    count -= 1;
                    continue;
                }
            }
            else if( temp == ')') {
                total += 1;
            }
        }
        
        temp = a[i];
    }
    
    cout << total;
    
    
    return 0;
}
