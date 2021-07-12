#include <bits\stdc++.h>
using namespace std;
double F(double x, int n)
{
    if (n == 1)
        return 2017 + x;
    return F(x, n - 1) + pow(x, n);
}
int main()
{
    double x;
    int n;
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap n = ";
    cin >> n;
    cout << "F(" << x << ", " << n << ") = " << F(x, n);
    return 0;
}