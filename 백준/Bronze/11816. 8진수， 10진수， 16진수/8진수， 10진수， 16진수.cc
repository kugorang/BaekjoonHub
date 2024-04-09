#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    
    cin >> x;
    
    if (x.substr(1, 1).compare("x") == 0)
    {
        cout << stoi(x.substr(2), 0, 16);
    }
    else if (x.substr(0, 1).compare("0") == 0)
    {
        cout << stoi(x.substr(1), 0, 8);
    }
    else
    {
        cout << stoi(x);
    }

    return 0;
}
