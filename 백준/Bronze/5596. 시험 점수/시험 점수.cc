#include <iostream>

using namespace std;

int main()
{
    int scoreSum1 = 0, scoreSum2 = 0;
    
    for (int i = 0; i < 4; ++i)
    {
        int temp;
        cin >> temp;
        
        scoreSum1 += temp;
    }
    
    for (int i = 0; i < 4; ++i)
    {
        int temp;
        cin >> temp;
        
        scoreSum2 += temp;
    }
    
    if (scoreSum1 >= scoreSum2)
        cout << scoreSum1;
    else
        cout << scoreSum2;
    
    return 0;
}