#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    
    cout << (A + B + C <= 21) ? 1 : 0;
    
    return 0;
}