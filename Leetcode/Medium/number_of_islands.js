//DFS로 해결

var n;
var m;

var numIslands = function(grid) {
	var count = 0; //육지 갯수
	n = grid.length; // 가로 길이
	if (n == 0) return 0;
	m = grid[0].length; // 세로 길이

	for (var i = 0; i < n; i++) {
		for (var j = 0; j < m; j++)
			if (grid[i][j] == '1') { // 땅인 경우
				DFS(grid, i, j); // dfs 돌려주고
				++count; // 육지 갯수 증가
			}
	}
	return count; // 마지막에 육지 갯수 출력
};

//dfs 함수
function DFS(grid, i, j) {
	if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != '1') return; //예외 경우
	grid[i][j] = '0'; // 바다로 표시하여 지나간 육지는 삭제
	DFS(grid, i + 1, j);
	DFS(grid, i - 1, j);
	DFS(grid, i, j + 1);
	DFS(grid, i, j - 1);
}