#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    int num_list_size = num_list.size();
    vector<int> answer;
    answer.reserve(n);
    
    for (int i = 0; i < num_list_size; i += n)
        answer.push_back(num_list[i]);
        
    return answer;
}