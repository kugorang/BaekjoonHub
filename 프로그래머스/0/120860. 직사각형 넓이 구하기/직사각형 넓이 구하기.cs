using System;

public class Solution {
    public int solution(int[,] dots) {
        int answer = 0;
        int maxX = int.MinValue, minX = int.MaxValue;
        int maxY = int.MinValue, minY = int.MaxValue;
        
        for (int row = 0; row < 4; ++row)
        {
            int currX = dots[row, 0];
            int currY = dots[row, 1];
            
            if (currX > maxX)
                maxX = currX;
            else if (minX > currX)
                minX = currX;
            
            if (currY > maxY)
                maxY = currY;
            else if (minY > currY)
                minY = currY;
        }
        
        return (maxX - minX) * (maxY - minY);
    }
}