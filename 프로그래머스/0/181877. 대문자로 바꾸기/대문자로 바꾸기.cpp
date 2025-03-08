#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for (auto &ch : myString)
        if (islower(ch))
            ch = toupper(ch);
    
    return myString;
}