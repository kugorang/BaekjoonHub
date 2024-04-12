#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    
    cin >> A >> B >> C;
    
    int multipleValue = A * B * C;
    int result[10] = { 0, };
    
    while (multipleValue > 0)
    {
        result[multipleValue % 10] += 1;
        multipleValue /= 10;
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << result[i] << endl;
    }
    
    return 0;
}