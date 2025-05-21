#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int count[31] = { 0, };
    
    for (auto str : strArr)
        ++count[str.length()];
    
    int answer = 0;
    
    for (int i = 1; i < 31; ++i)
        if (count[i] > answer)
            answer = count[i];
    
    return answer;
}