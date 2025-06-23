#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int count = 0;
    string temp = "";
    
    for (char ch : my_str)
    {
        temp += ch;
        
        if (++count % n == 0)
        {
            answer.push_back(temp);
            temp = "";
        }
    }
    
    if (temp != "")
        answer.push_back(temp);
    
    return answer;
}