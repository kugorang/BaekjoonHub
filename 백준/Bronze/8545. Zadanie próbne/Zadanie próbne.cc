#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int strLength = str.length();
    
    for (int i = strLength - 1; i >= 0; --i)
        cout << str[i];
    
    return 0;
}