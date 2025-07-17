#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string temp = "";
    
    for (char ch : myString)
    {
        if (ch == 'x' && temp != "")
        {
            answer.push_back(temp);
            temp.clear();
            continue;
        }
        else if (ch != 'x')
            temp.push_back(ch);
    }
    
    if (temp != "")
        answer.push_back(temp);
    
    sort(answer.begin(), answer.end());
    
    return answer;
}