#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    int boardRow = board.size();
    int boardCol = board[0].size();
    
    for (int i = 0; i < boardRow; ++i)
        for (int j = 0; j < boardCol; ++j)
            if (i + j <= k)
                answer += board[i][j];
    
    return answer;
}