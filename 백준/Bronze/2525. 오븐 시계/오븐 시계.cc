#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    
    cin >> A >> B;
    cin >> C;
    
    int tempH = C / 60;
    int tempM = C % 60;
    
    B += tempM;
    
    if (B >= 60)
    {
        B -= 60;
        A += 1;
    }
    
    A = (A + tempH) % 24;
    
    cout << A << " " << B;
    
    return 0;
}