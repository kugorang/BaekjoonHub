#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int arr1Size = arr1.size();
    int arr2Size = arr2.size();
    
    if (arr1Size == arr2Size)
    {
        int arr1Sum = 0;
        int arr2Sum = 0;
        
        for (int i = 0; i < arr1Size; ++i)
        {
            arr1Sum += arr1[i];
            arr2Sum += arr2[i];
        }
        
        if (arr1Sum == arr2Sum)
            return 0;
        
        return (arr1Sum > arr2Sum ? 1 : -1);
    }
    
    return (arr1Size > arr2Size ? 1 : -1);
}