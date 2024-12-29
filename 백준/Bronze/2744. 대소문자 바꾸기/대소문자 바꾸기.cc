#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int wordGapValue = 'a' - 'A';
    
    for (auto ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
            ch -= wordGapValue;
        else if (ch >= 'A' && ch <= 'Z')
            ch += wordGapValue;
        
        cout << ch;
    }
    return 0;
}