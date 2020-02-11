// 정렬 + 최대 갯수 찾기

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
    
    int N;
    long long num;
    vector<long long> v;
    int maxCount = 1;
    long long place = 1;
    int count = 1;
    
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end()); //정렬
    
    for(int j = 0; j < N-1; j++) {
        if(v[j] == v[j+1]) {
            count++;
        }
        else {
            if(maxCount < count) {
                maxCount = count;
                place = v[j];
            }
            count = 1;
        }
        if(maxCount < count) {
            maxCount = count;
            place = v[j];
        }
    }
    
    cout << place << "\n";

    return 0;
}
