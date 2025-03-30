#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    sort(num_list.begin(), num_list.end());
    
    int loopEnd = num_list.size();
    vector<int> answer;
    answer.reserve(loopEnd - 5);
    
    for (int i = 5; i < loopEnd; ++i)
        answer.push_back(num_list[i]);
    
    return answer;
}