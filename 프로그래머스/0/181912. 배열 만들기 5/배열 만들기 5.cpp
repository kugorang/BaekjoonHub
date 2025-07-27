#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for (string str : intStrs)
    {
        string temp = "";
        
        for (int i = s; i < s + l; ++i)
            temp.push_back(str[i]);
        
        int tempValue = stoi(temp);
        
        if (tempValue > k)
            answer.push_back(tempValue);
    }
    
    return answer;
}