//greedy coin

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int a;
    int left;
    
    cin >> a;
    
    left = 1000 - a;
    
    int count = 0;
    
    while(left != 0) {
        if(left >= 500) {
            left -= 500;
            count++;
        }
        else if(left >= 100) {
            left -= 100;
            count++;
        }
        else if(left >= 50) {
            left -= 50;
            count++;
        }
        else if(left >= 10) {
            left -= 10;
            count++;
        }
        else if(left >= 5) {
            left -= 5;
            count++;
        }
        else {
            left -= 1;
            count++;
        }
    }
    
    cout << count;
    
    
    return 0;
}