// Binary Search + lower Bound , Upper Bound 활용한 문제

#include <iostream>
#include <algorithm>

using namespace std;

int lowerBound(int Arr[], int len, int key);
int upperBound(int Arr[], int len, int key);


int main() {

	int N;
	int M;
	int lower, upper;

	cin >> N;

	int A[N];	// 상근이가 가진 카드 저장 배열

	for(int i = 0; i < N; i++) {
		cin >> A[i];
//		cout << A[i];
	}

	sort(A,A+N);
	cin >> M;

	int B[M];	// 있는지 없는지 비교할 카드 배열

	for(int j = 0; j < M; j++) {
		cin >> B[j];
//		cout << B[j];
	}


	int C[M]; // 정답 출력할 배열

	for(int z = 0; z < M; z++) {
		lower = lowerBound(A,N,B[z]);   //lower case
		upper = upperBound(A,N,B[z]);   //upper case
		if(upper == N-1 && A[N-1] == B[z])  //캅을 수 있는 상황 생각
			upper++;
		C[z] = upper - lower;
	}


	for(int i = 0; i < M; i++) {
		cout << C[i] << " ";
	}
	return 0;

}

int lowerBound(int Arr[], int len, int key) {
	int first = 0;
	int last = len-1;
	int mid;

	while(first < last) {
		mid = (first + last) / 2;
		if( key <= Arr[mid])
			last = mid;
		else
			first = mid + 1;
	}
	return last;
}

int upperBound(int Arr[], int len, int key) {
	int first = 0;
	int last = len-1;
	int mid;

	while(first < last) {
		mid = (first + last) / 2;
		if( key < Arr[mid])
			last = mid;
		else
			first = mid + 1;
	}
	return last;
}
