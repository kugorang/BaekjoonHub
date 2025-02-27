#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    int arrSize = arr.size();
    int start = (arrSize % 2 == 1 ? 0 : 1);
    
    for (int i = start; i < arrSize; i += 2)
        arr[i] += n;

    return arr;
}