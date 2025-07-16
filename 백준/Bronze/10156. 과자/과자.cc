#include <iostream>

using namespace std;

int main()
{
    int K, N, M;
    cin >> K >> N >> M;
    
    int result = K * N - M;
    
    if (result <= 0)
        cout << 0;
    else
        cout << result;
    
    return 0;
}