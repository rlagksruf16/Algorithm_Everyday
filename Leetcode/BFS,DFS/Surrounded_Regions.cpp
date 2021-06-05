class Solution {
public:
    void solve(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 || i==n-1 || j==m-1){ // 모든 가장자리 방문
                    if(matrix[i][j]=='O' && visited[i][j]==false){ // 방문하지 않았고 O 이면 주변 모두 방문
                        board(matrix,visited,i,j,n,m);
                    }
                }
                
            }
        }
        for(int i=0;i<n;i++){ // 가장자리 및 가장자리 연결된 것 다 방문 후 방문 안한거는 모두 X 처리 
            for(int j=0;j<m;j++){
                if(!visited[i][j]){
                    matrix[i][j]='X';
                }
            }
        }
        
    }
    void board(vector<vector<char>>&matrix,vector<vector<bool>>&visited,int row ,int col,int n,int m){ // 상하좌우 방문
        if(row<0 || row>=n || col<0 || col>=m || matrix[row][col]=='X' || visited[row][col]==true){ // 범위 벗어나거나 X거나 이미 방문한거면 X
            return ;
        }
        visited[row][col]=true;
        board(matrix,visited,row+1,col,n,m);
        board(matrix,visited,row-1,col,n,m);
        board(matrix,visited,row,col+1,n,m);
        board(matrix,visited,row,col-1,n,m);
    }
};