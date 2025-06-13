using System;

public class Solution {
    private static int GCD(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        
        return a;
    }
    
    private static int LCM(int a, int b)
    {
        return a * b / GCD(a, b);
    }
    
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        int[] answer = new int[2];
        
        // 1. 분모 통분 (denom1, denom2)
        int commonDenom = LCM(denom1, denom2);
        
        // 2. 분자 계산
        int numer3 = commonDenom / denom1 * numer1 + commonDenom / denom2 * numer2;
        
        // 3. 기약 분수 (분모, 분자 GCD)
        int gcdValue = GCD(numer3, commonDenom);
        
        // 분자
        answer[0] = numer3 / gcdValue;
            
        // 분모
        answer[1] = commonDenom / gcdValue;
        
        return answer;
    }
}