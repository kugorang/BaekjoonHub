#include <iostream>

using namespace std;

int main()
{
    int firstX, firstY;
    int secondX, secondY;
    
    cin >> firstX >> firstY >> secondX >> secondY;
    
    int thirdX, thirdY;
    
    cin >> thirdX >> thirdY;
    
    if (firstX == secondX)
        cout << thirdX;
    else if (firstX == thirdX)
        cout << secondX;
    else
        cout << firstX;
    
    cout << ' ';
    
    if (firstY == secondY)
        cout << thirdY;
    else if (firstY == thirdY)
        cout << secondY;
    else
        cout << firstY;
        
    return 0;
}