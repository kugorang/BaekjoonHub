#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A, B;
    
    cin >> A >> B;
    cout << fixed << setprecision(9) << (double)A / B << endl;
    
    return 0;
}