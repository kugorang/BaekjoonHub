#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    answer.reserve(2);
    
    int oddNum = 0, evenNum = 0;
    
    for (auto num : num_list)
    {
        if (num % 2 == 0)
            ++evenNum;
        else
            ++oddNum;
    }
    
    answer.push_back(evenNum);
    answer.push_back(oddNum);
    
    return answer;
}