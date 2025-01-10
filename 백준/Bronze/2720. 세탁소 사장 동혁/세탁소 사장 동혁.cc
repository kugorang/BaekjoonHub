#include <iostream>

using namespace std;

int main()
{
    int coinValue[4] = { 25, 10, 5, 1 };
    int testCase;
    cin >> testCase;
    
    for (int i = 0; i < testCase; ++i)
    {
        int change;
        cin >> change;
        
        for (int j = 0; j < 4; ++j)
        {
            cout << change / coinValue[j] << ' ';
            change %= coinValue[j];
        }
        
        cout << endl;
    }
    
    return 0;
}