#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    map<char, int> alphabetMap;
    string str;

    cin >> str;
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return toupper(c); });

    size_t strSize = str.size();

	for (size_t i = 0; i < strSize; ++i)
	{
        char currentCh = str.at(i);
        auto iter = alphabetMap.find(currentCh);

        if (iter != alphabetMap.end())
            ++(iter->second);
        else
            alphabetMap.emplace(currentCh, 1);
	}

    char answer = '?';
    int maxValue = -1;

    for (const auto& pair : alphabetMap)
    {
        if (pair.second > maxValue)
        {
            maxValue = pair.second;
            answer = pair.first;
		}
        else if (pair.second == maxValue)
        {
            maxValue = pair.second;
            answer = '?';
        }
    }

    cout << answer;

    return 0;
}