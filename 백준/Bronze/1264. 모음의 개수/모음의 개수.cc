#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int wordCount = 0;
        string str;
        getline(cin, str);
        
        if (str == "#")
            break;
        
        for (auto ch : str)
        {
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i'
                || ch == 'o' || ch == 'u')
                ++wordCount;
        }
        
        cout << wordCount << endl;
    }
    
    return 0;
}