// BFS

#include <iostream>
#include <string>
#include <queue>
#include <cstring>

using namespace std;

const int MAX = 10000;


int a,b;
bool visit[MAX];

string bfs(void) {
	queue<pair<int,string>> q;
	q.push(make_pair(a,""));
	visit[a] = true;

	while(!q.empty()) {
		int n = q.front().first;
		string c = q.front().second;
		q.pop();
		
		if(n == b)
			return c;
		
		// D, S, L, R
		int cur = (2 * n) % MAX;

    if(!visit[cur]) {
			visit[cur] = true;
			q.push(make_pair(cur,c + "D"));
		}

		cur = (n-1) < 0 ? 9999 : n - 1;
		if(!visit[cur]) {
			visit[cur] = true;
			q.push(make_pair(cur,c + "S"));
		}

		cur = (n%1000)*10 + n/1000;
		if(!visit[cur]) {
			visit[cur] = true;
			q.push(make_pair(cur,c + "L"));
		}

		cur = (n%10)*1000 + n/10;
		if(!visit[cur]) {
			visit[cur] = true;
			q.push(make_pair(cur,c + "R"));
		}
	}
}	

int main(void) {
  
	int x;
	cin >> x;
	
	for(int i = 0; i < x; i++) {
		memset(visit, false, sizeof(visit));
		cin >> a >> b;
		cout << bfs() << endl;      
	}
	return 0;

}

