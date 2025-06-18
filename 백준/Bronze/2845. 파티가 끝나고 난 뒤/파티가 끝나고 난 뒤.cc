#include <iostream>

using namespace std;

int main()
{
    int people, area;
    cin >> people >> area;
    
    for (int i = 0; i < 5; ++i)
    {
        int participant;
        cin >> participant;
        
        cout << participant - people * area << ' ';
    }
    
    return 0;
}