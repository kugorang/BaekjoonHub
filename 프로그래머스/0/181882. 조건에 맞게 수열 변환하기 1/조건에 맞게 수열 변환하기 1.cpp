#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    for (auto &num : arr)
    {
        if (num >= 50 && num % 2 == 0)
            num = num >> 1;
        else if (num < 50 && num % 2 == 1)
            num = num << 1;
    }
    
    return arr;
}