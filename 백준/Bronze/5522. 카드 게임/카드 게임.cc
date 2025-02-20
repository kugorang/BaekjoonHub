#include <iostream>

using namespace std;

int main()
{
    int answer = 0;
    
    for (int i = 0; i < 5; ++i)
    {
        int score;
        cin >> score;
        
        answer += score;
    }
    
    cout << answer;
    
    return 0;
}