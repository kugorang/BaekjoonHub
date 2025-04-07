#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    int num_list_size = num_list.size();
    answer.reserve(num_list_size);
    
    for (int i = n; i < num_list_size; ++i)
        answer.push_back(num_list[i]);
    
    for (int i = 0; i < n; ++i)
        answer.push_back(num_list[i]);
    
    return answer;
}