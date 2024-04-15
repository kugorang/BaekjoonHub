#include <iostream>

using namespace std;

int ReverseNum(int src)
{
    int returnValue = 0;
    
    returnValue += (src % 10) * 100;
    returnValue += (src / 10 % 10) * 10;
    returnValue += (src / 100);
    
    return returnValue;
}

int main()
{
    int A, B;
    
    cin >> A >> B;
    
    A = ReverseNum(A);
    B = ReverseNum(B);
    
    cout << ((A >= B) ? A : B);
    
    return 0;
}