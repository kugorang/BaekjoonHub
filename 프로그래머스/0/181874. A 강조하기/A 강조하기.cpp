#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for (auto &ch : myString)
    {
        if (ch == 'a')
            ch = 'A';
        else if (ch >= 'B' && ch <= 'Z')
            ch += 'a' - 'A';
    }
    
    return myString;
}