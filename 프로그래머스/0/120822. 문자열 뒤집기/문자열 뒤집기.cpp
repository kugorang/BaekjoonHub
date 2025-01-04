#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    int myStrLen = my_string.length();
    int loopEnd = myStrLen / 2;
    
    for (int i = 0; i < loopEnd; ++i)
    {
        char tmp = my_string[i];
        my_string[i] = my_string[myStrLen - 1 - i];
        my_string[myStrLen - 1 - i] = tmp;
    }

    return my_string;
}