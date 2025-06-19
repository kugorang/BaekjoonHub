#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    bool isAppeared[128] = { false, };
    
    for (char ch : my_string)
    {
        if (isAppeared[ch])
            continue;
        
        isAppeared[ch] = true;        
        answer.push_back(ch);
    }
    
    return answer;
}