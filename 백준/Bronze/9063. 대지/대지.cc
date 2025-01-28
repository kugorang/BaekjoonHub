#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if (N <= 1)
    {
        cout << 0;
        return 0;
    }
    
    int tempX, tempY;
    cin >> tempX >> tempY;
    
    int maxX = tempX, maxY = tempY;
    int minX = tempX, minY = tempY;
    
    for (int i = 1; i < N; ++i)
    {   
        cin >> tempX >> tempY;
        
        if (tempX > maxX)
            maxX = tempX;
        else if (minX > tempX)
            minX = tempX;
        
        if (tempY > maxY)
            maxY = tempY;
        else if (minY > tempY)
            minY = tempY;
    }
    
    cout << (maxX - minX) * (maxY - minY);
    
    return 0;
}