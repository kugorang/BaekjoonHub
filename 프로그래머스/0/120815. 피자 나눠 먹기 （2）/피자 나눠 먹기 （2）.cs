using System;

public class Solution {
    private static int GCD(int a, int b)
    {
        while (b != 0)
        {
            int tmp = b;
            b = a % b;
            a = tmp;
        }
        
        return a;
    }
    
    private static int LCM(int a, int b)
    {
        return a * b / GCD(a, b);
    }
    
    public int solution(int n) {
        return LCM(6, n) / 6;
    }
}