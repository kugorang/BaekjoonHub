#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    int numbersSize = numbers.size();
    
    if (direction == "left")
    {
        int firstNum = numbers[0];
        
        for (int i = 0; i < numbersSize - 1; ++i)
            numbers[i] = numbers[i + 1];
        
        numbers[numbersSize - 1] = firstNum;
    }
    else if (direction == "right")
    {
        int lastNum = numbers[numbersSize - 1];
        
        for (int i = numbersSize; i > 0; --i)
            numbers[i] = numbers[i - 1];
        
        numbers[0] = lastNum;
    }

    return numbers;
}