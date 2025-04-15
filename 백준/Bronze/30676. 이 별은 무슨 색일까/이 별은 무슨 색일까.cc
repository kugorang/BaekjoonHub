#include <iostream>

using namespace std;

int main()
{
    int wave;
    cin >> wave;
    
    if (wave >= 620)
        cout << "Red";
    else if (wave >= 590)
        cout << "Orange";
    else if (wave >= 570)
        cout << "Yellow";
    else if (wave >= 495)
        cout << "Green";
    else if (wave >= 450)
        cout << "Blue";
    else if (wave >= 425)
        cout << "Indigo";
    else
        cout << "Violet";
    
    return 0;
}