#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n);
    
    for (int row = 0; row < n; ++row)
    {
        answer[row].reserve(n);
        
        for (int col = 0; col < n; ++col)
        {    
            if (row == col)
                answer[row].push_back(1);
            else
                answer[row].push_back(0);
        }
    }

    return answer;
}