#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    
    for (int index : indices)
        my_string[index] = ' ';
    
    for (char ch : my_string)
        if (ch != ' ')
            answer.push_back(ch);
    
    return answer;
}