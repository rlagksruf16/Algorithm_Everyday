// x,y 좌표 거꾸로 정렬하기

#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>


using namespace std;


int main() {
    
    int N; // 갯수
    int a,b;
    cin >> N;
    
    vector<pair<int, int>>v;
    
    
    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        v.push_back(make_pair(b, a));
    }
    
    sort(v.begin(),v.end());
    for(int j = 0; j < N; j++) {
        cout << v[j].second << " " << v[j].first << endl;
    }
    return 0;
}
