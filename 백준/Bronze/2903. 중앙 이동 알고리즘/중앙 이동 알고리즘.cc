#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
 
    int arr[16];
    arr[0] = 2;
    for (int i = 1; i <= N; ++i)
        arr[i] = (arr[i - 1] << 1) - 1; 
    
    cout << arr[N] * arr[N];
    
    return 0;
}