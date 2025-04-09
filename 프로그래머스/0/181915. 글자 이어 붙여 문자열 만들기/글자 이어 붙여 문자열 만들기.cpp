#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    char tmp[1000] = { 0, };
    int loopEnd = index_list.size();
    string answer;
    answer.reserve(loopEnd);
    
    for (int i = 0; i < loopEnd; ++i)
        tmp[i] = my_string[index_list[i]];
    
    for (int i = 0; i < loopEnd; ++i)
        if (tmp[i] != 0)
            answer.push_back(tmp[i]);
    
    return answer;
}