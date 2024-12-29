#include <iostream>

using namespace std;

#define ARR_SIZE 100

void InitArr(int N, int M, int arr[][ARR_SIZE]);
void PrintResult(int N, int M, int arrA[][ARR_SIZE], int arrB[][ARR_SIZE]);

int main()
{
    int A[ARR_SIZE][ARR_SIZE], B[ARR_SIZE][ARR_SIZE];
    int N, M;
    
    cin >> N >> M;
    
    InitArr(N, M, A);
    InitArr(N, M, B);
    
    PrintResult(N, M, A, B);
    
    return 0;
}

void InitArr(int N, int M, int arr[][ARR_SIZE])
{
    for (int row = 0; row < N; ++row)
        for (int col = 0; col < M; ++col)
            cin >> arr[row][col];
}

void PrintResult(int N, int M, int arrA[][ARR_SIZE], int arrB[][ARR_SIZE])
{
    for (int row = 0; row < N; ++row)
    {
        for (int col = 0; col < M; ++col)
            cout << arrA[row][col] + arrB[row][col] << ' ';
        cout << endl;
    }
}