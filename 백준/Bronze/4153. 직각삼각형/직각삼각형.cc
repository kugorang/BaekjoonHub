#include <iostream>

using namespace std;

void swap(int &num1, int &num2);

int main()
{
    while (true)
    {
        unsigned long long int a, b, c;
    
        cin >> a >> b >> c;
        
        if (a == 0 && b == 0 && c == 0)
            break;
        
        if (a > c)
            swap(a, c);
        if (b > c)
            swap(b, c);
            
        if (a * a + b * b == c * c)
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
    
    return 0;
}

void swap(int &num1, int &num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}