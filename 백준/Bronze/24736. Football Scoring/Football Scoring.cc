#include <iostream>

using namespace std;

int main()
{
    int T, F, S, P, C;
    
    for (int i = 0; i < 2; ++i)
    {
        cin >> T >> F >> S >> P >> C;
        
        cout << T * 6 + F * 3 + S * 2 + P + C * 2 << ' ';
    }

    return 0;
}