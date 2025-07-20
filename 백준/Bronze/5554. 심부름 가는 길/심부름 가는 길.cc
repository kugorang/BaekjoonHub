#include <iostream>

using namespace std;

int main()
{
    int temp;
    int totalTime = 0;
    
    for (int i = 0; i < 4; ++i)
    {
        cin >> temp;
        totalTime += temp;
    }
    
    cout << totalTime / 60 << endl << totalTime % 60;
    
    return 0;
}