#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers)
{
    int numbersSize = numbers.size();
    int firstMax = 0, secondMax = 0;
    
    for (int i = 0; i < numbersSize; ++i)
    {
        int currentNum = numbers[i];
        
        if (currentNum > firstMax)
        {
            secondMax = firstMax;
            firstMax = currentNum;
        }
        else if (currentNum > secondMax)
            secondMax = currentNum;   
    }

    return firstMax * secondMax;
}