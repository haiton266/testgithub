#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll NMAX = 2e5 + 1;
const ll mod = 1e9 + 7;
double c[NMAX];
double r1, r2, h;
double cal(double a, double b, double c)
{
    double g;
    if (c >= h)
        g = r1;
    else
    {
        double temp = h * r2 * 1.0 / (r1 - r2);
        g = r1 * (c + temp) * 1.0 / (h + temp);
        cout << g << endl;
    }
    return (24 * b * g + 4 * b * b) / (a * b);
}
void solve()
{
    cin >> r1 >> r2 >> h;
    cin >> c[1] >> c[2] >> c[3];
    cout << cal(c[3], c[2], c[1]) << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}