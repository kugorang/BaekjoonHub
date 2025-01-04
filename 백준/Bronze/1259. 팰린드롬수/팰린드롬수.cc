#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        string inputNum;
        
        cin >> inputNum;
        
        if (inputNum == "0")
            break;
        
        int strLen = inputNum.length();
        int loopEnd = strLen / 2;
        bool result = true;
        
        for (int i = 0; i < loopEnd; ++i)
        {
            if (inputNum[i] != inputNum[strLen - 1 - i])
            {
                result = false;
                break;
            }
        }
        
        cout << (result ? "yes" : "no") << endl;
    }

    return 0;
}