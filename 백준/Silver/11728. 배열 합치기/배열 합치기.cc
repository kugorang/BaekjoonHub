#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    
    cin >> N >> M;
    
    int A[N], B[M];
    int result[N + M];
    
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    
    int iterA = 0, iterB = 0;
    int i = 0;
    
    do
    {
        if (iterA < N && iterB < M)
        {
            result[i] = A[iterA] <= B[iterB] ? A[iterA++] : B[iterB++];
        }
        else if (iterA < N)
        {
            result[i] = A[iterA++];
        }
        else // iterB < M
        {
            result[i] = B[iterB++];
        }
        
        cout << result[i++] << ' ';
    } while (iterA < N || iterB < M);
    
    return 0;
}