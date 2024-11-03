#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
	str.reserve(1000000);

    cin >> str;

    for (auto& c : str)
        c = toupper(c);

    char answer{};
    int maxValue{};

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

        int count = alphabetMap.at(currentCh);

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