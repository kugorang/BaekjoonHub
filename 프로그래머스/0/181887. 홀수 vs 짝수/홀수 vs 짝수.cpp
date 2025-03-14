#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int num_list_size = num_list.size();
    int oddSum = 0;
    int evenSum = 0;
    
    for (int i = 0; i < num_list_size; ++i)
    {
        if (i % 2 == 0)
            oddSum += num_list[i];
        else
            evenSum += num_list[i];
    }
    
    return (oddSum >= evenSum ? oddSum : evenSum);
}