// stable sort 정렬에 대한 문제

#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>

// stable_sort() 활용
using namespace std;

bool com(pair<int, string> a, pair<int, string> b);

int main() {
    
    int N; // 갯수
    int age;
    string name;
    vector<pair<int, string>> v;
    
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }
    
    stable_sort(v.begin(), v.end(), com);
    
    for(int j = 0; j < N; j++) {
        cout << v[j].first << " " << v[j].second << "\n";
    }
    
    
    return 0;
}

bool com(pair<int, string> a, pair<int, string> b) {
    if( a.first < b.first )
        return true;
    else
        return false;
        
}