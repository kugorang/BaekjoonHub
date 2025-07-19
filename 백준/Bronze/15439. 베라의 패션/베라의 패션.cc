#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int answer = 0;
    
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (i != j)
                ++answer;
    
    cout << answer;
    
    return 0;
}