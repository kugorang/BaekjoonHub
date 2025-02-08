#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {    
    for (auto &num : numbers)
        num = num << 1;
    
    return numbers;
}