#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    for (auto &ch : str)
        ch = toupper(ch);
    
    cout << str;
    
    return 0;
}