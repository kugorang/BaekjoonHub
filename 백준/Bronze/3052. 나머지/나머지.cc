#include <iostream>

using namespace std;

int main()
{
    bool arr[42] = {false, };
    
    for (int i = 0; i < 10; ++i)
    {
        int A;
        cin >> A;
        
        arr[A % 42] = true;
    }
    
    int totalCount = 0;
    
    for (int i = 0; i < 42; ++i)
        if (arr[i] == true)
            ++totalCount;
    
    cout << totalCount;
    
    return 0;
}