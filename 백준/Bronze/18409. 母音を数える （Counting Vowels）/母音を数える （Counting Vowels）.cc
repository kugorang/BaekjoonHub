#include <iostream>

using namespace std;

int main()
{
    int N;
    string str;
    
    cin >> N >> str;
    
    int answer = 0;
    
    for (int i = 0; i < N; ++i)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i'
           || str[i] == 'o' || str[i] == 'u')
            ++answer;
    
    cout << answer;
    return 0;
}