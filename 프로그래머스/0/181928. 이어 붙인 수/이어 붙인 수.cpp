#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int oddNum = 0;
    int evenNum = 0;
    int listSize = num_list.size();
    
    for (int i = 0; i < listSize; ++i)
    {
        if (num_list[i] % 2 == 1)
            oddNum = oddNum * 10 + num_list[i];
        else
            evenNum = evenNum * 10 + num_list[i];
    }
    
    answer = oddNum + evenNum;
    return answer;
}