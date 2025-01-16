#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    
    for (auto s1_ch : s1)
        for (auto s2_ch : s2)
            if (s1_ch == s2_ch)
                ++answer;

    return answer;
}