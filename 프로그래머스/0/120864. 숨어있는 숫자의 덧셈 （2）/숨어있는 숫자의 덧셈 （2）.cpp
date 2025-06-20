#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int temp = 0;
    
    for (char ch : my_string)
    {
        if (isdigit(ch))
        {
            if (temp != 0)
                temp *= 10;

            temp += (ch - '0');
        }
        else
        {
            answer += temp;
            temp = 0;
        }
    }
    
    if (temp != 0)
        answer += temp;
    
    return answer;
}