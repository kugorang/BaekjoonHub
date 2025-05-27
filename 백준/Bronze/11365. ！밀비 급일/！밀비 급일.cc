#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    while (true)
    {
        string tmp;
        
        getline(cin, tmp);
        
        if (tmp == "END")
            break;
        
        reverse(tmp.begin(), tmp.end());
        
        cout << tmp << endl;
    }
    
    return 0;
}