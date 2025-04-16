#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer;
    answer.reserve(numLog.size());
    
    int prevValue = 0;
    
    for (auto &num : numLog)
    {
        int targetNum = num - prevValue;
        
        if (targetNum == 1)
            answer.push_back('w');
        else if (targetNum == -1)
            answer.push_back('s');
        else if (targetNum == 10)
            answer.push_back('d');
        else if (targetNum == -10)
            answer.push_back('a');
        
        prevValue = num;
    }

    return answer;
}