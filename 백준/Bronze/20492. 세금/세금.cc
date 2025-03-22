#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    cout << N * 78 / 100 << ' ' << N - (N * 20 / 100 * 22 / 100);

    return 0;
}