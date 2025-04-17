#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int year = 2024 + (N * 7 / 12);
    int month = 1 + (N * 7 % 12);
    
    cout << year << ' ' << month;
    
    return 0;
}