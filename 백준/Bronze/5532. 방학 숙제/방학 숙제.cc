#include <iostream>

using namespace std;

int main()
{
    int L, A, B, C, D;
    
    cin >> L >> A >> B >> C >> D;
    
    int day1 = A % C > 0 ? A / C + 1 : A / C;
    int day2 = B % D > 0 ? B / D + 1 : B / D;
    
    cout << L - max(day1, day2);
    
    return 0;
}