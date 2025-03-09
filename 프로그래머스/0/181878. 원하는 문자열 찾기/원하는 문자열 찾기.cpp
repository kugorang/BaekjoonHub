#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    for (auto &ch : myString)
        if (isupper(ch))
            ch = tolower(ch);
    
    for (auto &ch : pat)
        if (isupper(ch))
            ch = tolower(ch);
    
    return (myString.find(pat) == string::npos ? 0 : 1);
}