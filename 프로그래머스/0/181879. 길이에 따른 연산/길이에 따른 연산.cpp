#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int num_list_size = num_list.size();
    int answer;
    
    if (num_list_size >= 11)
    {
        answer = 0;
        
        for (auto &num : num_list)
            answer += num;
    }
    else
    {
        answer = 1;
        
        for (auto &num : num_list)
            answer *= num;
    }

    return answer;
}