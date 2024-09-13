#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    
    cin >> num1 >> num2 >> num3;
    
    if (num1 == num2 && num1 == num3 && num2 == num3)
        cout << 10000 + num1 * 1000;
    else if (!(num1 == num2 || num2 == num3 || num3 == num1))
    {
        int maxNum = num1;
        
        if (num2 > maxNum)
            maxNum = num2;
        
        if (num3 > maxNum)
            maxNum = num3;
        
        cout << maxNum * 100;
    }
    else
    {
        int sameNum = num1;
        sameNum = (sameNum == num2) ? num2 : num3;
        
        cout << 1000 + sameNum * 100;
    }
    
    return 0;
}