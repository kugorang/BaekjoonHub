#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    
    cin >> T;
    
    for (int i = 0; i < T; ++i)
    {
        string currentStr;
        
        cin >> currentStr;
        
        cout << currentStr[0] << currentStr[currentStr.length() - 1] << endl;
    }
    
    return 0;
}