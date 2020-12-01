#include <string>
#include <vector>

using namespace std;

int ba1[1000001];
int ba2[1000001];


int solution(vector<int> a) {
    int answer = 0;

    ba1[0] = a[0];
    for(int i = 1; i < a.size(); i++) { // 앞에서부터 비교
        if(ba1[i-1] > a[i])
            ba1[i] = a[i];
        else
            ba1[i] = ba1[i-1];
    }
    
    ba2[a.size() - 1] = a[a.size()-1]; 
    for(int j = a.size() - 2; j >= 0; j--) { // 뒤에서부터
        if(ba2[j+1] > a[j])
            ba2[j] = a[j];
        else
            ba2[j] = ba2[j+1];
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] <= ba1[i] || a[i] <= ba2[i])
            answer++;
    }
    
    return answer;
}