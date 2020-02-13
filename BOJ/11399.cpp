// greedy algorithm atm 은행

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool com (pair<int , int> a, pair<int , int> b);

int main() {
    
    ios::sync_with_stdio(false);
    
    int n; // 사람 수
    int min;
    int sum;
    int totalSum;
    
    cin >> n;
    
    vector<int> v;
    
    for(int i = 0 ; i < n; i++) {
        cin >> min;
        v.push_back(min);
    }
    
    sort(v.begin(), v.end()); //정렬
    
    
    // 테스트 코드
//    for(int i = 0 ; i < n; i++) {
//        cout << v[i] << endl;
//    }
    
    sum = v[0];
    totalSum = v[0];
    for(int i = 1; i < n; i++) {
        sum += v[i];
        totalSum += sum;
    }
    
    cout << totalSum;
    
    return 0;
    
}
