#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string numStr = to_string(num);
    int strLength = numStr.length();
    
    for (int i = 0; i < strLength; ++i)
        if (numStr[i] == '0' + k)
            return i + 1;
    
    return -1;
}