#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for (auto &ch : my_string)
    {
        if (isupper(ch))
            ch = tolower(ch);
        else
            ch = toupper(ch);
    }

    return my_string;
}