#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    if (str.compare("SONGDO") == 0)
        cout << "HIGHSCHOOL";
    else if (str.compare("CODE") == 0)
        cout << "MASTER";
    else if (str.compare("2023") == 0)
        cout << "0611";
    else if (str.compare("ALGORITHM") == 0)
        cout << "CONTEST";

    return 0;
}