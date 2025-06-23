#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    string temp = "";
    int lastNumber;
    
    for (char ch : s)
    {
        if (ch == ' ')
        {
            if (temp != "Z")
            {
                lastNumber = stoi(temp);
                answer += lastNumber;
            }
            temp = "";
        }
        else if (ch == 'Z')
        {
            answer -= lastNumber;
            temp.push_back(ch);
        }
        else
            temp.push_back(ch);
    }
    
    if (temp != "" && temp != "Z")
        answer += stoi(temp);
    
    return answer;
}