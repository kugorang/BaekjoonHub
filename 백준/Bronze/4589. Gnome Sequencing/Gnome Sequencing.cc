#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    cout << "Gnomes:" << endl;
    
    int count = 0;
    
    while (count++ < N)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a > b)
            cout << ((b > c) ? "Ordered" : "Unordered") 
                << endl;
        else // a < b
            cout << ((b < c) ? "Ordered" : "Unordered") 
                << endl;
    }
    
    return 0;
}