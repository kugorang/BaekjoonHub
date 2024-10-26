#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    int loopEnd = num_list.size();
    
    for (int i = 0; i < loopEnd; ++i)
    {
        if (num_list[i] == n)
        {
            answer = 1;
            break;
        }
    }
    
    return answer;
}