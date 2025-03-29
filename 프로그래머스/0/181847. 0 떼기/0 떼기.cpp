#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer;
    answer.reserve(n_str.length());
    
    bool isFirstZero = true;
    
    for (auto &ch : n_str)
    {
        if (ch == '0' && isFirstZero)
            continue;
        
        isFirstZero = false;
        answer.push_back(ch);
    }
    
    return answer;
}