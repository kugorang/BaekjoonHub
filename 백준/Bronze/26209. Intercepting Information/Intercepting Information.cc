#include <iostream>

using namespace std;

int main()
{
    int n[8];
    
    for (int i = 0; i < 8; ++i)
    {
        cin >> n[i];
        
        if (n[i] != 0 && n[i] != 1)
        {
            cout << 'F';
            return 0;
        }
    }
    
    cout << 'S';
    
    return 0;
}