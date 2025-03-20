#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int M, F;
        cin >> M >> F;
        
        if (M == 0 && F == 0)
            break;
        
        cout << M + F << endl;
    }
    
    return 0;
}