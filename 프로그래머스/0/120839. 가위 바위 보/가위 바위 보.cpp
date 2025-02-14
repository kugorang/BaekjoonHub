#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer;
    answer.reserve(rsp.length());
    
    for (auto ch : rsp)
    {
        if (ch == '0')
            answer.push_back('5');
        else if (ch == '2')
            answer.push_back('0');
        else if (ch == '5')
            answer.push_back('2');
    }
    
    return answer;
}