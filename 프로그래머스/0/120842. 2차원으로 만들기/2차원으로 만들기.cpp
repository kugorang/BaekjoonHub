#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {    
    int num_list_size = num_list.size();
    int row = num_list_size / n;
    
    vector<vector<int>> answer(row, vector<int>());
    
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < n; ++j)
            answer[i].push_back(num_list[i * n + j]);        
    
    return answer;
}