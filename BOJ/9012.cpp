



#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int main() {
    
    stack<char>a;
    
    int T;
    int count = 0;
    
    cin >> T;
    
    string s;
    
    
    
    while(count != T) {
        
        bool balanced = true;
        cin >> s;
//        cout << s << endl;
        
        int leng = s.size();
        
        for(int i = 0; i < leng; i++) {
            if(s[i] == '(') {
                a.push(s[i]);
            }
            else {
                if(a.empty()) {
                    balanced = false;
                }
                else
                    a.pop();
            }
        }
        
        
        if(balanced == false)
            cout << "NO" << endl;
        else {
            if(a.empty())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        
        while(!a.empty()) {
            a.pop();
        }
        count++;
    }
    
    return 0;
}


