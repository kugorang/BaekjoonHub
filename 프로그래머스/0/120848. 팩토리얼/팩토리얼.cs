using System;

public class Solution {
    public int solution(int n)
    {
        int result = 1;
        int i = 2;
        
        while (result < n)
        {
            if (result * i > n)
                break;
            
            result *= i;
            ++i;
        }
        
        return i - 1;
    }
}