#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    string str = to_string(order);
    int answer = 0;
    
    for (auto &ch : str)
        if (ch == '3' || ch == '6' || ch == '9')
            ++answer;
    
    return answer;
}