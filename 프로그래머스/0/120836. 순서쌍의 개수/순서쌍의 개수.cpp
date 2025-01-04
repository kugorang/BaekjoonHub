#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int loopEnd = sqrt(n);
    
    for (int i = 1; i <= loopEnd; ++i)
        if (n % i == 0)
            ++answer;
    
    answer *= 2;
    
    if (loopEnd * loopEnd == n)
        --answer;

    return answer;
}