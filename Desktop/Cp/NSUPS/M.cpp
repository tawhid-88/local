#include <iostream>
using namespace std;

int main()
{
    string s;
    int caseNum = 1;
    while (cin >> s && s != "*")
    {
        if (s == "Hajj")
            cout << "Case " << caseNum << ": Hajj-e-Akbar" << endl;
        else
            cout << "Case " << caseNum << ": Hajj-e-Asghar" << endl;
        caseNum++;
    }
}