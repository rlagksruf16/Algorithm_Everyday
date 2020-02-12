// Greedy algorithm


#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int n, k;
    int coin;
    int count = 0;
    
    cin >> n >> k;
    
    stack<int> a;
    
    
    
    
    for(int i= 0; i < n; i++) {
        cin >> coin;
        a.push(coin);
    }
    
    while(k!= 0) {
        if( k < a.top()) {
            a.pop();
            continue;
        }
        else {
            while( k >= a.top()) {
                k -= a.top();
                count++;
                if( k == 0)
                    break;
            }
            a.pop();
        }
    }
    
    
    cout << count << "\n";
    
    return 0;
}
