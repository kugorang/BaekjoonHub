#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if (N == 0 || N == 1)
    {
        cout << 1;
        return 0;
    }
        
    unsigned long long result = 1;
    
    for (int i = 2; i <= N; ++i)
        result *= i;
    
    cout << result;
    
    return 0;
}