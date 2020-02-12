// 브루트 포스 문제

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    
    int x, y, z;
    
    
    cin >> x >> y >> z;
    
    int year = 1;
    
    while(1) {
        if((year - x) % 15 ==0 && (year - y) % 28 == 0 && (year - z) % 19 == 0)
            break;
        else
            year++;
    }
    
    cout << year;
    
    
    
    
    
    return 0;
}