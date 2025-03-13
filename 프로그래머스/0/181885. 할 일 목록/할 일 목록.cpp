#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    int todo_list_size = todo_list.size();
    vector<string> answer;
    answer.reserve(todo_list_size);
    
    for (int i = 0; i < todo_list_size; ++i)
        if (!finished[i])
            answer.push_back(todo_list[i]);
    
    return answer;
}