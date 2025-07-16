#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string tmp = "";
    
    for (const char &ch : my_string)
    {
        if (ch == ' ')
        {
            if (tmp != "")
            {
                answer.push_back(tmp);
                tmp = "";
            }
            continue;
        }
        
        tmp.push_back(ch);
    }
    
    if (tmp != "")
        answer.push_back(tmp);
    
    return answer;
}