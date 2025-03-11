#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    cout << (t % 5 == 0 ? t / 5 : t / 5 + 1);
    
    return 0;
}