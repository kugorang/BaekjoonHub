#include <iostream>

using namespace std;

int main()
{
    int firstNum;
    cin >> firstNum;
    
    int answer = 0;
    
    for (int i = 0; i < 5; ++i)
    {
        int temp;
        cin >> temp;
        
        if (temp == firstNum)
            ++answer;
    }
    
    cout << answer;
    
    return 0;
}