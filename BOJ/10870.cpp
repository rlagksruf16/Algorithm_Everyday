#include <algorithm>
#include <iostream>

using namespace std;

int pibo(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return pibo(n-1)+pibo(n-2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    
    cin >> N;
    
    cout << pibo(N) << endl;
    
    return 0;
}
