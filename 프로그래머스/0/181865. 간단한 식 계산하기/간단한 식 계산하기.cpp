#include <string>
#include <vector>
#include <iostream>

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
    string a, op, b;
    int i = 0;
    
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