#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    for (auto num : array)
        if (num == n)
            ++answer;
    
    return answer;
}