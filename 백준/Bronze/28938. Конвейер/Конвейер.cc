#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int answer = 0;
    
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        
        answer += temp;
    }
    
    if (answer > 0)
        cout << "Right";
    else if (answer == 0)
        cout << "Stay";
    else
        cout << "Left";
    
    return 0;
}