#include <iostream>

using namespace std;

int main()
{
    int A, B, V;
    
    cin >> A >> B >> V;
    
    int progressDay = 1 + (V - A) / (A - B);
    
    if ((V - A) % (A - B) > 0)
    {
        progressDay += 1;
    }
    
    cout << progressDay;
    
    return 0;
}