#include <iostream>

using namespace std;

int main()
{
    int inputNum, factorial = 1;
    
    scanf("%d", &inputNum);
    
    int loopNum = inputNum;
    
    while (loopNum)
    {
        factorial *= loopNum--;
    }
    
    printf("%d", factorial);
    
    return 0;
}