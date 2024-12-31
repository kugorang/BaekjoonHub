#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    
    for (int i = 0; i < 5; ++i)
    {
        int inputNum;
        cin >> inputNum;
        sum += (inputNum * inputNum);
    }
    
    cout << sum % 10;
    
    return 0;
}