#include <iostream>
#include <string>

using namespace std;

int main()
{
    string result;
    
    int first, second;
    cin >> first >> second;
    
    if (first > second)
        result = "descending";
    else if (first < second)
        result = "ascending";
    
    int previous = second;
    
    for (int i = 2; i < 8; ++i)
    {
        int temp;
        cin >> temp;
        
        if (abs(previous - temp) > 1)
        {
            result = "mixed";
            break;
        }
        
        previous = temp;
    }
    
    cout << result;

    return 0;
}