// Stack 문제 


// 순서대로 하나씩 입력을 받는데 s 에는 탑의 높이를, numbers에는 index를 저장한다
// 하나하나씩 스택에 넣어주기 전에 그 앞의 것들(왼쪽)에 있기 때문에 스택에서 하나씩 빼내면서 비교를 한다.
// 만약 스택의 것이 크면 위치를 출력해준다.
// 그게 아니면 계속 끝까지 뒤져본다.

#include <iostream>
#include <math.h>
#include <stack>

using namespace std;
    
int main() {
    int N;
    int num;
    stack<int> s;
    stack<int> numbers;
//    int result[500001];
    
    scanf("%d", &N); // 입력받기
    
    for(int i = 1; i <= N; i++) {
        scanf("%d", &num); // 갯수만큼 입력받기
        if(s.empty()) { // 비어있으면 무조건 왼쪽 첫번째거임 
            s.push(num);
            numbers.push(i);
            cout << "0 "; // 출력
        }
        else {
            if(s.top() > num) {
                cout << numbers.top() << " ";
                s.push(num);
                numbers.push(i);
            }
            else {
                s.pop();
                numbers.pop();
                while(!numbers.empty()) { // 빌때까지 
                    if(s.top() > num) {
                        cout << numbers.top() << " ";
                        s.push(num);
                        numbers.push(i);
                        break;
                    }
                    else {
                        s.pop();
                        numbers.pop();
                    }
                }
                if(numbers.empty()) { // 비어있으면 -> 즉 가장 높은 수신탑으로 왼쪽 수신탑들의 높이가 다 현재 비교하는 것보다 짧은 경우
                    cout << "0 ";
                    s.push(num);
                    numbers.push(i);
                }
            }
        }
    }
    return 0;
}









//int main() {
//    int N; // 탑의 갯수
//    int num; // 입력받을 탑
//    int com;
//    int count; // 위치를 나타낼 것
//
//    stack<int> s;
//    stack<int> temp;
//    stack<int> result;
//
//    cin >> N;
//
//    for(int i = 0; i < N; i++) {
//        cin >> num;
//        s.push(num);
//    }
//// 입력 부분
//
//    for(int i = N; i > 1; i--) { // 맨 앞의 타워는 왼쪽 타워가 없기 때문에 그 부분을 제외한 N-1 번 루프
//        com = s.top(); //비교할 탑 높이
//        s.pop(); //뽑아낸다
//        count = i-1; // 비교당하는 탑의 위치
//        while(!s.empty()) {
//            if(com > s.top()) { //비교
//                temp.push(s.top());
//                s.pop();
//                count--;
//            }
//            else {
//                result.push(count);
//                if(temp.empty()) {
//                    break;
//                }
//                else {
//                    while(!temp.empty()) {
//                        s.push(temp.top());
//                        temp.pop();
//                    }
//                    break;
//                }
//            }
//            if(count==0)
//                break;
//        }
//        if(count == 0) {
//            while(!temp.empty()) {
//                s.push(temp.top());
//                temp.pop();
//            }
//            result.push(0);
//        }
//    }
//
//    result.push(0);
//
//    while(!result.empty()) {
//        cout << result.top() << " ";
//        result.pop();
//    }
//
//    return 0;
//}





