#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        
        cout << temp << ' ' << temp << endl;
    }
    
    return 0;
}