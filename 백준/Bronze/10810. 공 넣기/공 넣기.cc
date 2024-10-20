#include <iostream>

using namespace std;

int main()
{
    int N, M;
    
    cin >> N >> M;
    
    int arr[101] = {0, };
    
    for (int loopNum = 0; loopNum < M; ++loopNum)
    {
        int i, j, k;
        
        cin >> i >> j >> k;
        
        for (int iter = i; iter <= j; ++iter)
            arr[iter] = k;
    }
    
    for (int loopNum = 1; loopNum <= N; ++loopNum)
        cout << arr[loopNum] << ' ';
    
    return 0;
}