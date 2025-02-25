#include <iostream>

using namespace std;

int main()
{
    int ampere;
    int watt, volt;
    
    cin >> ampere >> watt >> volt;
    
    cout << (watt / volt >= ampere ? 1 : 0);
    
    return 0;
}