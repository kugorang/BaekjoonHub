#include <string>
#include <vector>

using namespace std;

string parse(const string &s, int &i)
{
    string result;
    
    while (s[i] != ' ')
    {
        result += s[i];
        ++i;
    }
    ++i;
    return result;
}

int solution(string binomial) {
    int answer = 0;
    int i = 0;
    string a, op, b;

    a = parse(binomial, i);    
    op = parse(binomial, i);    
    b = parse(binomial, i);

    if (op == "+")
        answer = stoi(a) + stoi(b);
    else if (op == "-")
        answer = stoi(a) - stoi(b);
    else if (op == "*")
        answer = stoi(a) * stoi(b);

    return answer;
}