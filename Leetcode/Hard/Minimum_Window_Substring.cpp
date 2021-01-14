class Solution {
public:
    string minWindow(string s, string t) {
        string answer;
        if(s.empty() || t.empty()) {
            return answer;
        }
        
        int mLen = INT_MAX; // 정답 문자열 길이
        int mFirst = 0; // 정답 문자열 시작부분
        unordered_map<char, int> hash; // 해쉬 맵
        
        
        for(int i = 0; i < t.length(); i++) {
            hash[t[i]]++;
        }
        int start = 0;
        int end = 0;
        int counts = t.length();
        while(end < s.length()) {
            if(hash[s[end]] > 0) {
                counts--; // 만약 t의 문자열에 해당하는 문자가 존재하는 경우 counts 줄이기
            }
            hash[s[end]]--;
            end++;
            while(counts == 0) {
                if(end - start < mLen) {
                    mLen = end - start;
                    mFirst = start;
                }
                hash[s[start]]++;
                if(hash[s[start]] > 0) {
                    counts++;
                }
                start++;
            }
        }
        if(mLen != INT_MAX) {
            answer = s.substr(mFirst, mLen);
        }
        return answer;
    }
};
