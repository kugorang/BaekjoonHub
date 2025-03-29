#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for (int i = 0; i < N; ++i)
    {
        string str;
        cin >> str;
        
        int strLength = str.length();
        
        if (strLength >= 6 && strLength <= 9)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    
    return 0;
}