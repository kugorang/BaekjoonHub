#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int sum = 0;
    
    for (int i = 1; i <= N; ++i)
        sum += i;
    
    cout << sum << endl << (int)pow(sum, 2) << endl;
    sum = 0;
    
    for (int i = 1; i <= N; ++i)
        sum += pow(i, 3);
    
    cout << sum;
    
    return 0;
}