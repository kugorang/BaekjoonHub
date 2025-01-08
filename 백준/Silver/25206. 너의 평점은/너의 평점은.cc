#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

int main()
{
    float gradeSum = 0.0f;
    float creditSum = 0.0f;
    map<string, float> gradeValues;
    
    gradeValues.insert(make_pair("A+", 4.5f));
    gradeValues.insert(make_pair("A0", 4.0f));
    gradeValues.insert(make_pair("B+", 3.5f));
    gradeValues.insert(make_pair("B0", 3.0f));
    gradeValues.insert(make_pair("C+", 2.5f));
    gradeValues.insert(make_pair("C0", 2.0f));
    gradeValues.insert(make_pair("D+", 1.5f));
    gradeValues.insert(make_pair("D0", 1.0f));
    gradeValues.insert(make_pair("F", 0.0f));

    for (int i = 0; i < 20; ++i)
    {
        string subject, grade;
        float credit;

        cin >> subject >> credit >> grade;
        
        if (grade == "P")
            continue;
        
        gradeSum += (gradeValues.find(grade))->second * credit;
        creditSum += credit;
    }
    
    cout << gradeSum / creditSum;
    
    return 0;
}