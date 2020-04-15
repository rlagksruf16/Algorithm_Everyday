// 그리디 DNA

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

const int MAX = 50;

int N;  // 갯수
int M;  // 길이

int b[MAX][4]; // dna를 저장하는 2중 배열

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);  //속도 빠르게
    

    
    
    cin >> N >> M;  // 입력받기
    
    // 각 DNA를 입력받으면서 DNA의 각 index에 어떤 알파벳이 들어왔는지 갯수로 확인
    for (int i =0;i < N;i++) {
        string a;   // DNA 입력받는 string
        cin >> a;
        
        for(int j = 0; j < M; j++) {
            if(a[j] == 'A')
                b[j][0] += 1;
            else if(a[j] == 'C')
                b[j][1] += 1;
            else if(a[j] == 'G')
                b[j][2] += 1;
            else
                b[j][3] += 1;
            }
    }
    
    
    string dna = "";    // 최종 dna
    int counts = 0;     // 가장 작은 humming balance
    
    // A C G T 중에서 각 index마다 가장 큰 값을 찾고 그것의 index도 저장해줌
    for(int i = 0; i < M; i++) {
        int tmp = 0;
        int maxVal = 0;
        for(int j = 0; j < 4; j++) {
            if( b[i][j] > maxVal) {
                maxVal = b[i][j];
                tmp = j;
            }
        }
        counts += N - maxVal;   // 최댓값과 다른 것들의 합
        // 가장 큰 값을 다시 알파벳으로 변환하여 string에 저장
        if( tmp == 0)
            dna += 'A';
        else if( tmp == 1)
            dna += 'C';
        else if( tmp == 2)
            dna += 'G';
        else
            dna += 'T';
    }
    
    cout << dna << endl;
    cout << counts << endl;
    
    
    
    return 0;
}
