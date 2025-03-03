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
    
    return myString.find(pat) != string::npos;
}