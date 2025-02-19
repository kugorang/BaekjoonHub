#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -2147483648;
    int numbersSize = numbers.size();
    
    for (int i = 0; i < numbersSize - 1; ++i)
    {
        for (int j = i + 1; j < numbersSize; ++j)
        {
            int multiply = numbers[i] * numbers[j];
            
            if (multiply > answer)
                answer = multiply;
        }
    }
    
    return answer;
}