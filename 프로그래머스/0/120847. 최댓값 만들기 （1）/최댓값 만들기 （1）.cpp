#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers)
{
    int numbersSize = numbers.size();
    int firstMax, secondMax;
    
    if (numbers[0] >= numbers[1])
    {
        firstMax = numbers[0];
        secondMax = numbers[1];
    }
    else
    {
        firstMax = numbers[1];
        secondMax = numbers[0];
    }
    
    for (int i = 2; i < numbersSize; ++i)
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