#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    
    cin >> str;
    
    int timeSum = 0;
    
    for (auto ch : str)
    {
        switch (ch)
        {
            case 'A': case 'B': case 'C':
                timeSum += 3;
                break;
            case 'D': case 'E': case 'F':
                timeSum += 4;
                break;
            case 'G': case 'H': case 'I':
                timeSum += 5;
                break;
            case 'J': case 'K': case 'L':
                timeSum += 6;
                break;
            case 'M': case 'N': case 'O':
                timeSum += 7;
                break;
            case 'P': case 'Q': case 'R': case 'S':
                timeSum += 8;
                break;
            case 'T': case 'U': case 'V':
                timeSum += 9;
                break;
            case 'W': case 'X': case 'Y': case 'Z':
                timeSum += 10;
                break;
            default:
                timeSum += 2;
                break;
        }
    }
    
    cout << timeSum;
    
    return 0;
}