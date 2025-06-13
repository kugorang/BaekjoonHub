using System;

public class Solution {
    public int solution(int[] array) {
        int answer = 0;
        int[] arr = new int[1000];
        int maxValue = 0;
        int maxIndex = -1;
        
        foreach (int num in array)
        {
            ++arr[num];
            
            if (arr[num] > maxValue)
            {
                maxValue = arr[num];
                maxIndex = num;
            }
        }

        Array.Sort(arr, (num1, num2) => num2.CompareTo(num1));
        
        if (arr.Length >= 2 && arr[0] == arr[1])
            return -1;
        
        return maxIndex;
    }
}