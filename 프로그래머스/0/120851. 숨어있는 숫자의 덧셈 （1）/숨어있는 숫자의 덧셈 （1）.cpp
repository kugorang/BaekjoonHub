#include <string>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for (auto ch : my_string)
        if (isdigit(ch))
            answer += ch - '0';

    return answer;
}