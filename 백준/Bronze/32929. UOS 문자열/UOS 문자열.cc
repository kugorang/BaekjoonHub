#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    
    x -= 1;
    
    if (x % 3 == 0)
        cout << 'U';
    else if (x % 3 == 1)
        cout << 'O';
    else
        cout << 'S';
    
    return 0;
}