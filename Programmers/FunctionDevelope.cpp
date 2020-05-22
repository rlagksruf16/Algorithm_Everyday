#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> left;
    stack<int> a;
    vector<int> answer;
    int count = 1;
    for(int i = 0; i < speeds.size(); i++) {
        int temp = (100-progresses[i])/speeds[i];
        if((100-progresses[i])%speeds[i] > 0)
            left.push_back(temp+1);
        else
            left.push_back(temp);
    }
    int maxA = left[0];
    for(int i = 1; i < left.size(); i++) {
        if(maxA >= left[i]) {
            count++;
        }
        else {
            answer.push_back(count);
            count = 1;
            maxA = left[i];
        }
        if(i == left.size()-1)
                answer.push_back(count);
    }
    return answer;
}