#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> container(3);
    
    for (int i = 0; i < 3; ++i)
        cin >> container[i];
    
    sort(container.begin(), container.end());
    
    for (int i = 0 ; i < 3; ++i)
        cout << container[i] << ' ';
    
    return 0;
}