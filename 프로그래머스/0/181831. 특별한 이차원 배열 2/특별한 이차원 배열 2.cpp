#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int arrSize = arr.size();
    
    for (int row = 0; row < arrSize; ++row)
        for (int col = 0; col < row; ++col)
            if (arr[row][col] != arr[col][row])
                return 0;

    return 1;
}