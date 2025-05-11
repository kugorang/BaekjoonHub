#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while (n > 0)
    {
        if (n >= 5)
        {
            cout << 'V';
            n -= 5;
        }
        else
        {
            cout << 'I';
            n -= 1;
        }
    }
    
    return 0;
}