#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 100;
    int minGap = 100;
    
    for (int element : array)
    {
        int currentGap = abs(element - n);
        
        if (minGap >= currentGap)
        {
            if (minGap == currentGap && element > answer)
                continue;
            
            minGap = currentGap;   
            answer = element;
        }
    }
    
    return answer;
}