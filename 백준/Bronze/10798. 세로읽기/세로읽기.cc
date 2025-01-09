#include <iostream>
#include <string>

using namespace std;

int main()
{
    char arr[5][15] = { '\0', };
    
    for (int row = 0; row < 5; ++row)
    {
        int col = 0;
        string inputStr;
        cin >> inputStr;
        
        while (inputStr[col])
        {
            arr[row][col] = inputStr[col];
            ++col;
        }
    }

    for (int col = 0; col < 15; ++col)
        for (int row = 0; row < 5; ++row)
            if (arr[row][col])
                cout << arr[row][col];

    return 0;
}