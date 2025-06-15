#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    
    int D;
    cin >> D;
    
    for (int i = 0; i < D; ++i)
    {
        ++C;
        
        if (C == 60)
        {
            C = 0;
            B += 1;
        }
        
        if (B == 60)
        {
            B = 0;
            A += 1;
        }
        
        if (A == 24)
            A = 0;
    }   
    
    cout << A << ' ' << B << ' ' << C;
    
    return 0;
}