#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n * 0.5f;
    
    answer *= (answer + 1);
    
    return answer;
}