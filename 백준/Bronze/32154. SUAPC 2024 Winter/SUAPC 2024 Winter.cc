#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    switch (N)
    {
        case 1:
            cout << 11 << endl << "A B C D E F G H J L M";
            break;
        case 2: case 3:
            cout << 9 << endl << "A C E F G H I L M";
            break;
        case 4:
            cout << 9 << endl << "A B C E F G H L M";
            break;
        case 5: case 6: case 7: case 8: case 9:
            cout << 8 << endl << "A C E F G H L M";
            break;
        case 10:
            cout << 8 << endl << "A B C F G H L M";
            break;
    }
    return 0;
}