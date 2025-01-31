#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    answer.reserve(numlist.size());
    
    for (auto num : numlist)
        if (num % n == 0)
            answer.push_back(num);

    return answer;
}