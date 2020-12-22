#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int getPi(string p) {
	int len = p.size();
	vector<int> pi(len, 0);
	int j = 0;
	for (int i = 1; i < len; i++) {
		while (j > 0 && p[i] != p[j]) { // 틀릴 경우 점프해가는 구간
			j = pi[j - 1];
		}
		if (p[i] == p[j]) 
			pi[i] = ++j;		
	}
	sort(pi.begin(), pi.end());
	return pi[len - 1]; // 최댓값 
}

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);


	string str; // 문자열
	int maxi = 0; // 최댓값 저장 변수

	cin >> str; // 입력

	for (int i = 0; i < str.size(); i++) { // 문자열 자르기 위한 반복문
		string ptn = str.substr(i, str.size()); //문자열 자르는 substr 메서드 사용
		int result = getPi(ptn);
		maxi = max(maxi, result);
	}
	cout << maxi;
	
	return 0;
}