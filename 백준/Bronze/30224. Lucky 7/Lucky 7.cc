#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int num = stoi(str);
    
    if (str.find('7') == string::npos)
        cout << (num % 7 != 0 ? 0 : 1);
    else
        cout << (num % 7 != 0 ? 2 : 3);
    
    return 0;
}