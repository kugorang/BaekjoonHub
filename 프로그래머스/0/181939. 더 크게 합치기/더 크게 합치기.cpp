#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int aPlusB = stoi(to_string(a) + to_string(b));
    int bPlusA = stoi(to_string(b) + to_string(a));
    
    return aPlusB > bPlusA ? aPlusB : bPlusA;
}