#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int evenCount = 0;
    int oddCount = 0;
    
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        
        if (temp % 2 == 0)
            ++evenCount;
        else
            ++oddCount;
    }
    
    if (evenCount > oddCount)
        cout << "Happy";
    else
        cout << "Sad";
    
    return 0;
}