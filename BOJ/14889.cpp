#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int teams[20] = {}; // start팀에 보낼 사람들 분리 용도의 배열
int s[20][20] = {}; // 시너지 점수가 있는 2차원 배열
int N;
int minScore = 99999999;

void DFS(int a, int counts) {
    vector<int> start;
    vector<int> link;
    int s_sc = 0; // 시너지 점수 합산 
    int l_sc = 0; 
    if(counts == (N/2)) {
        for(int i = 0; i < N; i++) {
            if(teams[i] == true)
                start.push_back(i);
            else
                link.push_back(i);
        }
        for(int i = 0; i < (N/2); i++) {
            for(int j = 0; j < (N/2); j++) {
                s_sc += s[start[i]][start[j]];
                l_sc += s[link[i]][link[j]];
            }
        }
        if(abs(s_sc - l_sc) < minScore)
            minScore = abs(s_sc - l_sc);
    }
    for(int i = a; i < N; i++) {
        if(teams[i])
            continue;
        else {
            teams[i] = true;
            DFS(i, counts+1);
            teams[i] = false;
        }
    }
}

int main() {
    
    

    cin >> N;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> s[i][j];
        }
    }
    DFS(0,0);

    cout << minScore;

    return 0;
}