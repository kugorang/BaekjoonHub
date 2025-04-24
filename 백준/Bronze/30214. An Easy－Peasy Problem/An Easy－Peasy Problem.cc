#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    
    if ((float)num2 / num1 <= 2.0f)
        cout << 'E';
    else
        cout << 'H';
    
    return 0;
}