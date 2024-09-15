#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    
    cin >> N;
    
    int loopNum = N / 4;
    
    for (int i = 0; i < loopNum; ++i)
        cout << "long ";
    cout << "int";
    
    return 0;
}