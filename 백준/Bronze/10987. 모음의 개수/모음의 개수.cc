#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int count = 0;
    
    for (const char &ch : str)
        if (ch == 'a' || ch == 'e' || ch == 'i'
            || ch == 'o' || ch == 'u')
            ++count;
    
    cout << count;
    
    return 0;
}