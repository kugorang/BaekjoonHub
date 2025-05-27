#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int alphabet[26] = { 0, };
    string answer = "";
    
    for (const auto &ch : s)
        ++alphabet[ch - 'a'];
    
    for (int i = 0; i < 26; ++i)
        if (alphabet[i] == 1)
            answer.push_back('a' + i);
    
    return answer;
}