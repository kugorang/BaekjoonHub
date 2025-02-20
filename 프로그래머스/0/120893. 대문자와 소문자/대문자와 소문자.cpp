#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (auto ch : my_string)
    {
        if (isupper(ch))
            answer.push_back(tolower(ch));
        else
            answer.push_back(toupper(ch));
    }

    return answer;
}