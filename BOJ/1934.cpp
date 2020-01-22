
// 최소공배수 tc를 만드는 문제

#include <iostream>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
	int num;

	cin >> num;

	int x[num];
	int y[num];

	for(int i = 0; i < num; i++) {

		cin >> x[i] >> y[i];	// 입력 받기

	}

	for(int j = 0; j < num; j++) {

		cout << lcm(x[j],y[j]) << endl;

	}
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
