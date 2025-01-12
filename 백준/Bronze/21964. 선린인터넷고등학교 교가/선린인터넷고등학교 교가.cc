#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    string inputStr;
    cin >> inputStr;
    
    for (int i = N - 5; i < N; ++i)
        cout << inputStr[i];
    
    return 0;
}