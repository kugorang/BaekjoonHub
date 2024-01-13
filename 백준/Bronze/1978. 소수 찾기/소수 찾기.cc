#include <iostream>

using namespace std;

int main()
{
    int inputNum, primeCnt = 0;
    
    scanf("%d", &inputNum);
    
    for (int i = 0; i < inputNum; i++)
    {
        bool checkPrime = true;
        int checkNum;
        
        scanf("%d", &checkNum);
        
        for (int j = 2; j * j <= checkNum; j++)
        {
            if (!(checkNum % j))
            {
                checkPrime = false;
                break;
            }
        }
        
        if (checkPrime && checkNum != 1)
        {
            ++primeCnt;
        }
    }
    
    printf("%d", primeCnt);
    
    return 0;
}