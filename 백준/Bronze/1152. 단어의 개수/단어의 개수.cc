#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    getline(cin, str);

    int wordCount = 0;
    bool isSpace = true;

    for (int i = 0; str[i]; ++i)
    {
		if (str[i] == ' ')
			isSpace = true;
		else if (isSpace)
		{
			++wordCount;
			isSpace = false;
		}
    }

    cout << wordCount;

    return 0;
}