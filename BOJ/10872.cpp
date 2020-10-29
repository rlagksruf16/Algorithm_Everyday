#include <algorithm>
#include <iostream>

using namespace std;

int fac(int n) {
    if(n > 1)
        return n*fac(n-1);
    else
        return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    
    cin >> N;
    
    cout << fac(N) << endl;
    
    return 0;
}