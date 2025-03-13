#include <iostream>

using namespace std;

int main()
{
    int T, S;
    cin >> T >> S;
    
    if (T >= 12 && T <= 16)
        cout << (S == 1 ? 280 : 320);
    else
        cout << 280;
    
    return 0;
}