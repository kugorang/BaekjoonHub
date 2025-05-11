#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for (int index = i; index <= j; ++index)
    {
        int currentNum = index;
        
        while (currentNum > 0)
        {
            if (currentNum % 10 == k)
                ++answer;
            
            currentNum /= 10;
        }
    }

    return answer;
}