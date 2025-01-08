#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double A, B;
    cin >> A >> B;
    
    cout << fixed << setprecision(1000) << A / B;
    
    return 0;
}