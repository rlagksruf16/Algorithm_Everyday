// brute force Algorithm


#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    
    int A[9];
    int total = 0;
    int num1;
    int num2;
    
    
    for(int i = 0; i < 9; i++) {
        cin >>A[i];
        total += A[i];
    }
    
    for(int x = 0; x < 8; x++) {
        for(int y=x+1; y < 9; y++) {
            if(total - (A[x]+A[y]) == 100) {
                num1 = A[x];
                num2 = A[y];
                break;
            }
        }
    }
    
//    cout << num1 << " " << num2;
    
    sort(A, A+9);
    
    for(int i = 0; i < 9; i++) {
        if(A[i] == num1 || A[i] == num2 )
            continue;
        else
            cout << A[i] << endl;
    }
    
    
    return 0;
}
