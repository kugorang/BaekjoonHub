#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    for (int i = 0; i < t; ++i)
    {
        int num1, num2;
        cin >> num1 >> num2;
        
        cout << num1 + num2 << endl;
    }
    
    return 0;
}