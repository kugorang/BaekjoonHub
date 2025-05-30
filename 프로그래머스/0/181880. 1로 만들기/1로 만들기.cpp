#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    for (auto &num : num_list)
    {
        while (num > 1)
        {
            ++answer;
            num >>= 1;
        }
    }

    return answer;
}