#include <iostream>

using namespace std;

int main(void)
{
    int N, M;
    
    cin >> N >> M;
    
    int arr[101];
    
    for (int loopCount = 1; loopCount <= N; ++loopCount)
        arr[loopCount] = loopCount;
    
    for (int loopCount = 1; loopCount <= M; ++loopCount)
    {
        int i, j;
        
        cin >> i >> j;
        
        int swapRangeNum = (j - i) / 2 + 1;
        for (int swapCount = 0; swapCount < swapRangeNum; ++swapCount)
        {
            int tmp = arr[i + swapCount];
            arr[i + swapCount] = arr[j - swapCount];
            arr[j - swapCount] = tmp;
        }
    }
    
    for (int loopCount = 1; loopCount <= N; ++loopCount)
        cout << arr[loopCount] << ' ';

    return 0;
}