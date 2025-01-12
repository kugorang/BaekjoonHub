#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int max = sides[0];
    int maxIndex = 0;
    
    for (int i = 1; i < sides_len; ++i)
        if (sides[i] > max)
        {
            max = sides[i];
            maxIndex = i;
        }
    
    int othersSum = 0;
    
    for (int i = 0; i < sides_len; ++i)
    {
        if (i == maxIndex)
            continue;
        
        othersSum += sides[i];
    }
    
    answer = (othersSum > max) ? 1 : 2;
    
    return answer;
}