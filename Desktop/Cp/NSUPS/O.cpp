#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, count = 0;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int toast = (k * l) / nl;
    int availableSalt = p / np;
    int limes = c * d;
    count = min(toast, min(limes, availableSalt))/n;
    cout << count;
    return 0;
}