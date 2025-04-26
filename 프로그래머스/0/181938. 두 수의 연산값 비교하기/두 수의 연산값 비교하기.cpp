#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int result = stoi(to_string(a) + to_string(b));
    
    if (result > 2 * a * b)
        return result;
    
    return 2 * a * b;
}