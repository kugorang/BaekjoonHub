#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inputStr;
    cin >> inputStr;
    
    int result = (inputStr[0] == '=' || inputStr[0] == '-') ? 0 : 1;
    int strLen = inputStr.length();
    
    for (int i = 1; i < strLen; ++i)
    {
        char prevCh = inputStr[i - 1];

        switch (inputStr[i])
        {
            case '=':
                if (prevCh == 'c' || prevCh == 's')
                    continue;
                else if (prevCh == 'z')
                {
                    if (i >= 2 && inputStr[i - 2] == 'd')
                        result -= 2;
                    else
                        continue;
                }
                else
                    --result;
                break;
            case '-':
                if (prevCh == 'c' || prevCh == 'd')
                    continue;
                else
                    --result;
                break;
            case 'j':
                if (prevCh == 'l' || prevCh == 'n')
                    continue;
                break;
        }

        ++result;
    }

    cout << result;

    return 0;
}