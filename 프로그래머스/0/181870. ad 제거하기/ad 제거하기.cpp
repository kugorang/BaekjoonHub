#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    answer.reserve(strArr.size());
    
    for (auto &str : strArr)
        if (str.find("ad") == string::npos)
            answer.push_back(str);

    return answer;
}