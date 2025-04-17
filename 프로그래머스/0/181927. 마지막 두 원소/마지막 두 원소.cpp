#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int num_list_size = num_list.size();
    
    int lastElement = num_list[num_list_size - 1];
    int prevElement = num_list[num_list_size - 2];
    
    if (lastElement > prevElement)
        num_list.push_back(lastElement - prevElement);
    else
        num_list.push_back(lastElement << 1);

    return num_list;
}