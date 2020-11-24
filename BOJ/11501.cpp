#include <cstdio>
#include <iostream>
#define MAX 1010101

using namespace std;

typedef long long ll;
ll day[MAX];
int main(){
    int tc;
    for(scanf("%d", &tc); tc-- ;){
	    int n; 
	    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++) scanf("%ll", &day[i]);
      // n-1부터 시작
	    ll maxDay = 0;
	    ll money = 0;
    for(int i = n-1; i >= 0 ; i--){
	    if(maxDay < day[i]) maxDay = day[i];
        if(maxDay > day[i]) money += (maxDay-day[i]);
    }
        cout << money;
    }
    return 0;
}