#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int burger[3];
    int drink[2];
    
    for (int i = 0; i < 3; ++i)
        cin >> burger[i];
    
    for (int i = 0; i < 2; ++i)
        cin >> drink[i];
    
    int minSetValue = INT_MAX;
    
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; j++)
        {
            int setPrice = burger[i] + drink[j] - 50;
            if (minSetValue > setPrice)
                minSetValue = setPrice;
        }
    }
    
    cout << minSetValue;
    
    return 0;
}