#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    int num_list_size = num_list.size();
    vector<int> answer;
    answer.reserve(num_list_size - (n - 1));
    
    for (int i = n - 1; i < num_list_size; ++i)
        answer.push_back(num_list[i]);
    
    return answer;
}