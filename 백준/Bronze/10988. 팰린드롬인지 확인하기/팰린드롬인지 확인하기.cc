#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    
    cin >> word;
    
    int wordLen = word.length();
    int loopEnd = wordLen * 0.5f;
    int result = 1;
    
    for (int i = 0; i < loopEnd; ++i)
    {
        if (word[i] != word[wordLen - 1 - i])
        {
            result = 0;
            break;
        }
    }
    
    cout << result;
    return 0;
}