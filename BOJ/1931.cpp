// Greedy Algorithm 회의 시간 문제

#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

bool com (pair<int , int> a, pair<int , int> b);

int main() {
    
    ios::sync_with_stdio(false);
    
    int n; // 회의실 수
    int f, l;
    
    vector<pair<int, int>> v;
    
    cin >> n;
    
    
    for(int i = 0; i < n; i++) {
        cin >> f >> l;
        
        v.push_back(make_pair(f, l));
    }
    
    sort(v.begin(),v.end(), com);
    
    
    // 테스트 코드
//    for(int i = 0; i < n; i++) {
//        cout << v[i].first << " " << v[i].second << endl;
//    }
    
    int count = 1;

    int num = v[0].second;

    for(int i = 1; i < n; i++) {
        if(num <= v[i].first ) {
            count++;
            num = v[i].second;
        }
    }
    
    
    cout << count << "\n";
    
    return 0;
}

bool com (pair<int , int> a, pair<int , int> b) {
    if( a.second < b.second )
        return true;
    else if ( a.second == b.second )
        return a.first < b.first;
    else
        return false;
    
}

