#include <iostream>

using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    
    for (int row = 0; row < R; ++row)
    {
        for (int col = 0; col < C; ++col)
            cout << '*';
        cout << endl;
    }
    
    return 0;
}