#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    answer.reserve(numbers.size());
    
    for (auto num : numbers)
        answer.push_back(num << 1);
    
    return answer;
}