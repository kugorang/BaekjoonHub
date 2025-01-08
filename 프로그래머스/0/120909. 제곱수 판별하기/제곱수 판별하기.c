#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int sqrtNum = sqrt(n);
    return (sqrtNum * sqrtNum == n) ? 1 : 2;
}