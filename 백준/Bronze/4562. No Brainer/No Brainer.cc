#include <iostream>

using namespace std;

int main()
{
    int dataSet;
    cin >> dataSet;
    
    for (int i = 0; i < dataSet; ++i)
    {
        int x, y;
        cin >> x >> y;
        
        if (x < y)
            cout << "NO BRAINS" << endl;
        else
            cout << "MMM BRAINS" << endl;
    }
    
    return 0;
}