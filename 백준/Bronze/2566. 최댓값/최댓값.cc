#include <iostream>

using namespace std;

int main()
{
    int max = -1;
    int resultRow, resultCol;

    for (int row = 0; row < 9; ++row)
    {
        for (int col = 0; col < 9; ++col)
        {
            int tmp;
            cin >> tmp;
            
            if (tmp > max)
            {
                max = tmp;
                resultRow = row + 1;
                resultCol = col + 1;
            }
        }
    }
    
    cout << max << endl
        << resultRow << ' ' << resultCol;

    return 0;
}