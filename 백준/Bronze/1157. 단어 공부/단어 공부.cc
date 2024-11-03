#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); // 입출력 성능 최적화
    cin.tie(nullptr);

    string str;
    cin >> str;

    for (auto& c : str)
        c = toupper(c);

    char answer = '?';
    int maxValue = 0;

    unordered_map<char, int> alphabetMap;
    auto endIt = alphabetMap.end();

    for (auto currentCh : str)
    {
        auto it = alphabetMap.find(currentCh);

        if (it == endIt)
        {
            alphabetMap.insert({ currentCh, 1 });
			endIt = alphabetMap.end();
        }
        else
            ++(it->second);

        int count = alphabetMap[currentCh];

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