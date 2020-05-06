#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack <int> fin;
    
    for(int i = 0; i < moves.size(); i++) {
        for(int j = 0; j < board.size(); j++) {
            if(board[j][moves[i]-1] == 0)
                continue;
            else {
                if(fin.empty()) {
                    fin.push(board[j][moves[i]-1]);
                    board[j][moves[i]-1] = 0;
                }
                else {
                    int temp = fin.top();
                    if(temp == board[j][moves[i]-1]) {
                        answer += 2;
                        fin.pop();
                    }
                    else {
                        fin.push(board[j][moves[i]-1]);
                    }
                    board[j][moves[i]-1] = 0;
                }
                break;
            }
        }
    }
    return answer;
}