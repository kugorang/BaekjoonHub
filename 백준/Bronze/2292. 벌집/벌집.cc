#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N == 1)
    {
        cout << 1;
        return 0;
    }

    N -= 1;

    int count = 1;

    while (N >= 1)
        N -= (6 * (count++));

    cout << count;

    return 0;
}