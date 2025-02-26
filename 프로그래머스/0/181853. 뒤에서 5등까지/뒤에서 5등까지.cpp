#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    sort(num_list.begin(), num_list.end());
    
    auto num_list_begin = num_list.begin();
    
    return vector<int>(num_list_begin, num_list_begin + 5);
}