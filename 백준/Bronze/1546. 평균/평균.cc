#include <iostream>

using namespace std;

int main()
{
    int N;
    
    cin >> N;
    
    int M = -1;
    int arr[1001];
    float sum = 0.0f;
    
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
        
        if (arr[i] > M)
            M = arr[i];
    }
    
    for (int i = 0; i < N; ++i)
        sum += (float)arr[i] / M * 100;
    
    cout << sum / N;        
    
    return 0;
}