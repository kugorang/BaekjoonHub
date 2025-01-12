#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer;
    answer.reserve(my_string.length() * n);
    
    for (auto my_ch : my_string)
        answer.append(string(n, my_ch));
    
    return answer;
}