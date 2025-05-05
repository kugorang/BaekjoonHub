#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int includedSize = included.size();
    int answer = 0;
    
    for (int i = 0; i < includedSize; ++i)
        if (included[i])
            answer += (a + d * i);

    return answer;
}