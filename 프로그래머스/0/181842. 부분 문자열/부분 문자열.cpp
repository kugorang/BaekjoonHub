#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    int str1Len = str1.length();
    int str2Len = str2.length();
    
    for (int i = 0; i < str2Len; ++i)
    {
        int j = 0;
        
        while (str1[j] && str2[i + j])
        {
            if (str1[j] != str2[i + j])
                break;

            ++j;
        }
                    
        if (j == str1Len)
            answer = 1;
    }
        
    return answer;
}