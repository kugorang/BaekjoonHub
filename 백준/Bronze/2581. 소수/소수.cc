#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    
    int minValue = -1;
    int sum = 0;
    
    if (M == 1)
        M = 2;

    for (int i = M; i <= N; ++i)
    {
        bool isPrimeNum = true;
        int loopEnd = sqrt(i);
        
        for (int j = 2; j <= loopEnd; ++j)
        {
            if (i % j == 0)
            {
                isPrimeNum = false;
                break;
            }
        }
        
        if (isPrimeNum)
        {
            if (minValue == -1)
                minValue = i;
            
            sum += i;
        }
    }
    
    if (sum != 0)
        cout << sum << endl;

    cout << minValue;
    
    return 0;
}