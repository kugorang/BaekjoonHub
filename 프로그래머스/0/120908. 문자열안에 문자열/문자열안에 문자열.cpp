#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int i = -1;
    
    while (str1[++i])
    {
        int j = -1;
        bool isSubStr = true;
        
        while (str2[++j])
        {
            if (str1[i + j] == str2[j])
                continue;
            
            isSubStr = false;
            break;
        }
        
        if (isSubStr)
            return 1;
    }
    
    return 2;
}