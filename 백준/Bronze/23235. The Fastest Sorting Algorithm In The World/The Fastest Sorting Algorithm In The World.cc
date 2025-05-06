#include <iostream>

using namespace std;

int main()
{
    bool loopEnd = false;
    int index = 1;
    
    while (!loopEnd)
    {
        int n;
        cin >> n;
        
        if (n == 0)
        {
            loopEnd = true;
            continue;
        }
        
        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;
        }
        
        cout << "Case " << index++ << ": Sorting... done!" << endl;
    }
    
    return 0;
}