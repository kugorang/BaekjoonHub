#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    int my_string_len = my_string.length();
    
    string answer;
    answer.reserve(n);
    
    for (int i = my_string_len - n; i < my_string_len; ++i)
        answer.push_back(my_string[i]);
    
    return answer;
}