#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    
    cin >> N;
    
    int result = 0;
    
    for (int i = 0; i < N; ++i)
    {
        string inputStr;
        
        cin >> inputStr;
        
        bool isGroupWord = true;
        bool isAlreadyAppear[26] = {false, };
        char lastCh;
        
        for (auto currCh : inputStr)
        {
            int arrIndex = currCh - 'a';
            
            if (!isAlreadyAppear[arrIndex])
            {
                isAlreadyAppear[arrIndex] = true;
                lastCh = currCh;
                continue;
            }
            
            if (lastCh == currCh)
                continue;
            
            // isAlreadyAppear && lastCh != ch
            isGroupWord = false;
            break;
        }
        
        if (isGroupWord)
            ++result;
    }

    cout << result;

    return 0;
}