#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int myStringLen = myString.length();
    int patLen = pat.length();
    
    for (int i = 0; i <= myStringLen - patLen; ++i)
    {
        bool isSubStr = true;
        int patIndex = 0;
        
        for (int j = i; j < i + patLen; ++j)
        {
            if (j >= myStringLen || myString[j] != pat[patIndex++])
            {
                isSubStr = false;
                break;
            }
        }
        
        if (isSubStr)
            ++answer;
    }
    
    return answer;
}