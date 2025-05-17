#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if (N <= 0)
        return 0;
    
    string str;
    getline(cin, str);
    
    for (int i = 1; i <= N; ++i)
    {
        getline(cin, str);
        
        cout << i << ". " << str << endl;
    }
    
    return 0;
}