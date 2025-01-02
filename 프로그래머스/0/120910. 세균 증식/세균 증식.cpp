#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    vector<int> cells;
    cells.reserve(t);
    
    cells.push_back(n);
    
    for (int i = 1; i <= t; ++i)
        cells.push_back(cells[i - 1] * 2);
    
    return cells[t];
}