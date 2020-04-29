// 영어 끝말잇기 

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    int counts = 1; // 몇번째인지 읽는 함수
    int cycle = 1; // 사이클 횟수
    int temp = 0; // 임시 변수
    for(int i = 1; i < words.size(); i++) {
        counts++;
        if(i%n == 0)
            cycle += 1;
        if(words[i-1][words[i-1].size()-1] != words[i][0]) {
            temp = 1;
            break;
        }
        for(int j = 0; j < i; j++) {
            if( words[j] == words[i]) {
                temp = 1;
                break;
            }
        }
        if(temp == 1)
            break;
    }
    if(temp == 0) { // 끝말잇기가 정상적인 경우
        answer.push_back(0);
        answer.push_back(0);
    }
    else if(temp == 1) { // 정상적이지 않고 끊길 경우
        if(counts%n == 0)
            answer.push_back(n);
        else
            answer.push_back(counts%n);
        answer.push_back(cycle);
    }
    
    return answer;
}