#include <string>
#include <vector>

using namespace std;

int solution(string n_str) {
    int answer = 0;
    
    for (auto &num : n_str)
    {
        answer *= 10;
        answer += num - '0';
    }
    
    return answer;
}