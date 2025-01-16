#include <iostream>

using namespace std;

int main()
{
    int N, K;
    
    cin >> N >> K;
    
    int count = 0;
    
    for (int i = 1; i <= N; ++i)
    {
        if (N % i != 0)
            continue;
        
        if (++count == K)
        {
            cout << i;
            break;
        }
    }
    
    if (count < K)
        cout << 0;
    
    return 0;
}