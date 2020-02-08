// basic sort Algorithm

#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    
    int N; // 갯수
    
    cin >> N;
    int arr[N];
    
    for(int i = 0 ; i < N; i++)
        cin >> arr[i];
    
    sort(arr,arr + N);
    
    for(int j = 0; j < N; j++) {
        cout << arr[j] << "\n";
    }
    return 0;
}