#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[1000];
    int N, k;
    
    cin >> N >> k;
    
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    
    sort(arr, arr + N);
    
    cout << arr[N - k];
    
    return 0;
}