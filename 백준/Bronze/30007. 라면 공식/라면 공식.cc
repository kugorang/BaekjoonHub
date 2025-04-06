#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for (int i = 0; i < N; ++i)
    {
        int A, B, X;
        cin >> A >> B >> X;
        
        cout << A * (X - 1) + B << endl;
    }
    
    return 0;
}