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
        
        if (temp % 2 == 1)
            ++answer;
    }
    
    cout << answer;
    
    return 0;
}