#include <iostream>

using namespace std;

int main()
{
    float n;
    cin >> n;
    
    cout.precision(2);
    cout << fixed << n / 4;
    
    return 0;
}