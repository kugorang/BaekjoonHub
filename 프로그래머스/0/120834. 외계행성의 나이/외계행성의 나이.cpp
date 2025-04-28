#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

string solution(int age) {
    string answer = to_string(age);
    
    for (auto &element : answer)
        element = 'a' + (element - '0');

    return answer;
}