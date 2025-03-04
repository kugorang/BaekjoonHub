#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    for (auto &ch : my_string)
        if (ch == alp[0])
            ch -= ('a' - 'A');
    
    return my_string;
}