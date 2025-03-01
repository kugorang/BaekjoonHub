#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> x;
    
    for (auto &num : arr)
        for (int i = 0; i < num; ++i)
            x.push_back(num);

    return x;
}