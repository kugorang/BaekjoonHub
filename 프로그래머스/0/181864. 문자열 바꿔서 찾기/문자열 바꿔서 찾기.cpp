#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    for (auto &ch : myString)
    {
        if (ch == 'A')
            ch = 'B';
        else if (ch == 'B')
            ch = 'A';
    }
    
    if (myString.find(pat) == string::npos)
        return 0;

    return 1;
}