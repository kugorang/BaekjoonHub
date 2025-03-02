#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer;
    answer.reserve(rny_string.length() << 1);
    
    for (auto &ch : rny_string)
    {
        if (ch == 'm')
        {
            answer.push_back('r');
            answer.push_back('n');
        }
        else
            answer.push_back(ch);
    }
    return answer;
}