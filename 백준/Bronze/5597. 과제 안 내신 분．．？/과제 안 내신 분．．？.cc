#include <iostream>

using namespace std;

int main(void)
{
    bool arr[31] = {false, };
    
    for (int i = 0; i < 28; ++i)
    {
        int studentNo;
        cin >> studentNo;
        
        arr[studentNo] = true;
    }
    
    for (int i = 1; i <= 30; ++i)
        if (arr[i] == false)
            cout << i << endl;
    
    return 0;
}