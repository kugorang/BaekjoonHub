#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer;
    int index_list_size = index_list.size();
    answer.reserve(index_list_size);
    
    for (int i = 0; i < index_list_size; ++i)
        answer.push_back(my_string[index_list[i]]);
    
    return answer;
}