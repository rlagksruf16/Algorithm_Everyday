// Binary Search

#include <iostream>
#include <algorithm>

using namespace std;

int BinarySearch(int Arr[], int len, int key);

int main() {

	int N;
	int M;

	cin >> N;

	int A[N];	// 상근이가 가진 카드 저장 배열

	for(int i = 0; i < N; i++) {
		cin >> A[i];
//		cout << A[i];
	}

	sort(A,A+N);    //stl sort 를 이용해서 정렬
	cin >> M;

	int B[M];	// 있는지 없는지 비교할 카드 배열

	for(int j = 0; j < M; j++) {
		cin >> B[j];
//		cout << B[j];
	}


	int C[M]; // 정답 출력할 배열

	for(int z = 0; z < M; z++) {
		C[z] = BinarySearch(A,N,B[z]);
	}


	for(int i = 0; i < M; i++) {
		cout << C[i] << " ";
	}
	return 0;

}

// 이분 탐색 코드
int BinarySearch(int Arr[], int len, int key) {
	int first = 0;
	int last = len-1;
	int mid;

	while(first <= last) {
		mid = (first + last) / 2;
		if( key == Arr[mid])
			return 1;
		else if( key < Arr[mid])
			last = mid - 1;
		else
			first = mid + 1;
	}
	return 0;
}
