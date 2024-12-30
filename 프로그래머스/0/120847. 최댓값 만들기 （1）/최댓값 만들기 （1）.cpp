#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int lastNumbersIndex = numbers.size() - 1;
    
    for (int i = 0; i < lastNumbersIndex; ++i)
    {
        for (int j = i + 1; j <= lastNumbersIndex; ++j)
        {
            int multiply = numbers[i] * numbers[j];

            if (multiply > answer)
                answer = multiply;
        }
    }

    return answer;
}