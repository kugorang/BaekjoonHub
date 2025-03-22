#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    int cipherLength = cipher.length();
    string answer;
    answer.reserve(cipherLength);
    
    for (int i = code - 1; i < cipherLength; i += code)
        answer.push_back(cipher[i]);

    return answer;
}