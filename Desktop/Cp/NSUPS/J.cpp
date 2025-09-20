#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s[8] == 'A' && s[0] == '1' && s[1] == '2')
    {
        s[0] = '0';
        s[1] = '0';
    }
    else if (s[8] == 'P' && !(s[0] == '1' && s[1] == '2'))
    {
        
        int hour = (s[0] - '0') * 10 + (s[1] - '0');
        hour = hour + 12;
        s[0] = (hour / 10) + '0'; 
        s[1] = (hour % 10) + '0'; 
    }
    for (int i = 0; i < 8; i++)
    {
        cout << s[i];
    }

    return 0;
}