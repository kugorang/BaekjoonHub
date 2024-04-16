#include <iostream>

using namespace std;

int main()
{
    int N;
    
    cin >> N;
    
    int dividor = 2;
    
    while (N > 1)
    {
        if (N % dividor != 0)
        {
            dividor += 1;
            continue;
        }
        
        N /= dividor;
        cout << dividor << endl;
    }
    
    return 0;
}