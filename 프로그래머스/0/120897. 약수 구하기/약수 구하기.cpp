#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.reserve(n);
    
    answer.push_back(1);
    
    for (int i = 2; i < n; ++i)
        if (n % i == 0)
            answer.push_back(i);
    
    if (n != 1)
        answer.push_back(n);
    
    return answer;
}