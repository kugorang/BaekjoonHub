using System;
using System.Collections.Generic;

public class Solution {
    public string solution(string letter) {
        string answer = "";
        
        var morse = new Dictionary<string, string>()
        { 
            {".-", "a"}, {"-...", "b"}, {"-.-.", "c"}, {"-..", "d"}, {".", "e"}, 
            {"..-.", "f"}, {"--.", "g"}, {"....", "h"}, {"..", "i"}, {".---", "j"}, 
            {"-.-", "k"}, {".-..", "l"}, {"--", "m"}, {"-.", "n"}, {"---", "o"}, 
            {".--.", "p"}, {"--.-", "q"}, {".-.", "r"}, {"...", "s"}, {"-", "t"}, 
            {"..-", "u"}, {"...-", "v"}, {".--", "w"}, {"-..-", "x"},
            {"-.--", "y"}, {"--..", "z"}
        };
        
        string[] parts = letter.Split(' ');
        
        foreach (string part in parts)
        {
            string value;
            
            if (morse.TryGetValue(part, out value))
                answer += value;
        }
        
        return answer;
    }
}