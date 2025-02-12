#include <iostream>

using namespace std;

int main()
{
    string nickname;
    cin >> nickname;
    
    for (int i = 0; i < 3; ++i)
        cout << ":fan:";
    cout << endl;
    cout << ":fan::" << nickname << "::fan:" << endl;
    for (int i = 0; i < 3; ++i)
        cout << ":fan:";

    return 0;
}