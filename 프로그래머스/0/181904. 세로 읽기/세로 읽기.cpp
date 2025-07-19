#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int my_string_len = my_string.length();
    
    for (int i = c - 1; i < my_string_len; i += m)
        answer.push_back(my_string[i]);
    
    return answer;
}