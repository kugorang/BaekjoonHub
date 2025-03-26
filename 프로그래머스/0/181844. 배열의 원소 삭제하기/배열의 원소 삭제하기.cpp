#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    answer.reserve(delete_list.size());
    
    for (auto &num : arr)
    {
        bool hasElement = false;

        for (auto &delete_num : delete_list)
        {
            if (delete_num == num)
            {
                hasElement = true;
                break;
            }
        }
        
        if (!hasElement)
            answer.push_back(num);
    }

    return answer;
}