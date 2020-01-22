// 최대공약수와 최소공배수 구하는 문제

#include <iostream>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
	int x, y;	// 두 수

	cin >> x >> y;	// 입력 받기

	cout << gcd(x,y) << endl;
	cout << lcm(x,y) << endl;

	return 0;

}

int gcd(int a, int b) {	//최대공약수(유클리드 호제법 활용)
	while(b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {	//최소공배수
	return a * b / gcd(a,b);
}
