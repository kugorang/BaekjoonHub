#include <iostream>

using namespace std;

int main()
{
    long long int N, M;
    cin >> N >> M;
    
    cout << ((N > M) ? (N - M) : (M - N));
    return 0;
}