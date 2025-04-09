#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    cout << (100 * N / M > 0 ? "Yes" : "No");
    
    return 0;
}