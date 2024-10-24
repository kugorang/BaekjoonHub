#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    if (a % 2 == 1)
    {
        if (b % 2 == 1) // a와 b가 모두 홀수
            answer = a * a + b * b;
        else    // a가 홀수, b가 짝수
            answer = 2 * (a + b);
    }
    else if (b % 2 == 1)    // a가 짝수, b가 홀수
        answer = 2 * (a + b);
    else    // a와 b 모두 짝수
    {
        answer = a - b;
        
        if (answer < 0)
            answer *= -1;
    }
    
    return answer;
}