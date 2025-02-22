#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    answer.reserve(2);
    
    answer.push_back(array[0]);
    answer.push_back(0);
    
    int arraySize = array.size();
    
    for (int i = 1; i < arraySize; ++i)
    {
        if (array[i] > answer[0])
        {
            answer[0] = array[i];
            answer[1] = i;
        }
    }
    
    return answer;
}