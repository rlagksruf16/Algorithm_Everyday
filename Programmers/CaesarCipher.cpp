#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ')
            answer += s[i];
        else if(int(s[i]) <= 90 && int(s[i] + n > 90))
            answer += char(int(s[i]) + n - 26);
        else if(int(s[i]) <= 122 && int(s[i]) >= 97 && int(s[i]) + n > 122)
            answer += char(int(s[i]) + n - 26);
        else
            answer += char(int(s[i] + n ));
    }
    return answer;
}