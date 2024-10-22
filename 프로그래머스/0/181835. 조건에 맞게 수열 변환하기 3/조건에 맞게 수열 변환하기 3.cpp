#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    int arrLen = arr.size();
    
    vector<int> answer;
    answer.reserve(arrLen);
    
    for (int i = 0; i < arrLen; ++i)
    {
        int appendNum = (k % 2) ? arr[i] * k : arr[i] + k;
        answer.push_back(appendNum);
    }

    return answer;
}