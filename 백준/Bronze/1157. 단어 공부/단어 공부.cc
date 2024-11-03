#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    string str;

    cin >> str;
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return toupper(c); });

    char answer = '?';
    int maxValue = 0;

    unordered_map<char, int> alphabetMap;

    for (auto currentCh : str)
    {
        int count = ++alphabetMap[currentCh];

        if (count > maxValue)
        {
            maxValue = count;
            answer = currentCh;
        }
        else if (count == maxValue)
            answer = '?';
    }

    cout << answer;

    return 0;
}