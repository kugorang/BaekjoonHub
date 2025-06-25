#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int i = 2;
    int index = 0;

    while (n > 1)
    {
        if (n % i == 0)
        {
            if (index == 0 || (index != 0 && answer.back() != i))
            {
                answer.push_back(i);
                ++index;
            }
                
            n /= i;
        }
        else
            ++i;
    }
    
    return answer;
}