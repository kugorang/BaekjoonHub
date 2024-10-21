#include <iostream>

using namespace std;

int main(void)
{
    int N, M;
    
    cin >> N >> M;
    
    int arr[101];
    
    for (int loopNum = 1; loopNum <= N; ++loopNum)
        arr[loopNum] = loopNum;

    for (int loopNum = 0; loopNum < M; ++loopNum)
    {
        int i, j;
        
        cin >> i >> j;
        
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    
    for (int loopNum = 1; loopNum <= N; ++loopNum)
        cout << arr[loopNum] << ' ';
    
    return 0;
}