#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    int strArrSize = strArr.size();
    
    for (int i = 0; i < strArrSize; ++i)
    {
        if (i % 2 == 1)
            for (auto &ch : strArr[i])
                ch = toupper(ch);
        else
            for (auto &ch : strArr[i])
                ch = tolower(ch);
    }

    return strArr;
}