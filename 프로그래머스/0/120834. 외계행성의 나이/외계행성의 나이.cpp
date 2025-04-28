#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = to_string(age);
    
    for (auto &element : answer)
        element += 'a' - '0';

    return answer;
}