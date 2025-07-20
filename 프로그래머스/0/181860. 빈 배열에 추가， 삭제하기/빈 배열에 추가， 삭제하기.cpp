#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    int flagLength = flag.size();
    
    for (int i = 0; i < flagLength; ++i)
    {
        if (flag[i])
        {
            int loopEnd = arr[i] << 1;
            
            for (int j = 0; j < loopEnd; ++j)
                answer.push_back(arr[i]);
        }
        else
            for (int j = 0; j < arr[i]; ++j)
                answer.pop_back();
    }
    
    return answer;
}