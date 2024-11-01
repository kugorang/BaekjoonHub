#include <iostream>

using namespace std;

int main(void)
{
    int king, queen, rook, bishop, night, pawn;
    
    cin >> king >> queen >> rook >> bishop >> night >> pawn;
    
    cout << 1 - king << ' ' << 1 - queen << ' '
        << 2 - rook << ' ' << 2 - bishop << ' '
        << 2 - night << ' ' << 8 - pawn;
    
    return 0;
}