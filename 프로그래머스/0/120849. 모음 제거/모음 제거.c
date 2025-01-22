#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string) {
    int my_str_len = strlen(my_string);
    char* answer = (char*)malloc(my_str_len + 1);
    int my_str_i = -1;
    int answer_i = 0;
    
    while (my_string[++my_str_i])
    {
        char ch = my_string[my_str_i];
        
        if (ch == 'a' || ch == 'e' || ch == 'i' 
            || ch == 'o' || ch == 'u')
            continue;
        
        answer[answer_i++] = ch;
    }
    
    answer[answer_i] = '\0';
    
    return answer;
}