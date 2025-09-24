#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin >> t;
    const double pi = acos(-1.0);
    for (int i = 1; i <= t; i++)
    {
        double x,y;
        cin >> x;
        y = (x / 10.0) * 6.0;
        double totalArea = x * y;
        double r = (x / 5.0);
        double redArea = pi * r * r;
        double greenArea = totalArea - redArea;

        cout <<fixed<< setprecision(2) << redArea << " " << greenArea << endl;
    }
}