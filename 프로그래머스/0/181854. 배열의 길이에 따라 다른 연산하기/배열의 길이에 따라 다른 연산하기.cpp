#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    int arrSize = arr.size();
    
    if (arrSize % 2 == 1)
        for (int i = 0; i < arrSize; i += 2)
                arr[i] += n;
    else
        for (int i = 1; i < arrSize; i += 2)
                arr[i] += n;

    return arr;
}