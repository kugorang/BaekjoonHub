#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int num_list_len = num_list.size();
    
    vector<int> answer;
    answer.reserve(num_list_len);
    
    for (int i = 0; i < num_list_len; ++i)
        answer.push_back(num_list[num_list_len - 1 - i]);

    return answer;
}