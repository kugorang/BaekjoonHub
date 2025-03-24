#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int W, H;
    
    cin >> W >> H;
    
    cout << fixed << setprecision(1) << W * H * 0.5f;
    
    return 0;
}