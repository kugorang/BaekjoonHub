#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer;
    answer.reserve(my_string.length() * n);
    
    for (auto my_ch : my_string)
        for (int i = 0; i < n; ++i)
            answer.push_back(my_ch);
    
    return answer;
}