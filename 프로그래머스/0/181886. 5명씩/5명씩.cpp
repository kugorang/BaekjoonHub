#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    int namesSize = names.size();
    vector<string> answer;
    answer.reserve(namesSize / 5 + 1);
    
    for (int i = 0; i < namesSize; ++i)
        if (i % 5 == 0)
            answer.push_back(names[i]);
    
    return answer;
}