#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        
        if (n == -1)
            break;
        
        vector<int> perfectNum;
        perfectNum.reserve((int)sqrt(n) << 1);
        
        int sum = 1;
        
        for (int i = 2; i < n; ++i)
        {
            if (n % i == 0)
            {
                perfectNum.push_back(i);
                sum += i;
            }
        }
        
        if (n == sum)
        {
            cout << n << " = 1";
            for (auto num : perfectNum)
                cout << " + " << num;
        }
        else
            cout << n << " is NOT perfect.";

        cout << endl;                
    }
    
    return 0;
}