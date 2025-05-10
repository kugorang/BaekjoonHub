#include <iostream>

using namespace std;

int main()
{
    int t1, e1, f1, t2, e2, f2;
    
    cin >> t1 >> e1 >> f1 >> t2 >> e2 >> f2;
    
    int maxResult = t1 * 3 + e1 * 20 + f1 * 120;
    int melResult = t2 * 3 + e2 * 20 + f2 * 120;
    
    if (maxResult > melResult)
        cout << "Max";
    else if (maxResult < melResult)
        cout << "Mel";
    else
        cout << "Draw";

    return 0;
}