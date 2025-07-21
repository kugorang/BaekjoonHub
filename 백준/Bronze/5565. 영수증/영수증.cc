#include <iostream>

using namespace std;

int main()
{
    int totalSum;
    cin >> totalSum;
    
    for (int i = 0; i < 9; ++i)
    {
        int temp;
        cin >> temp;
        
        totalSum -= temp;
    }
    
    cout << totalSum;
    
    return 0;
}