#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int is_prefix_length = is_prefix.length();
    
    for (int i = 0; i < is_prefix_length; ++i)
        if (is_prefix[i] != my_string[i])
            return 0;

    return 1;
}