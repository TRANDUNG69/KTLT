#include <bits\stdc++.h>
using namespace std;
int gt(int n)
{
    if (n == 1)
        return 1;
    return n * gt(n - 1);
}
int main()
{
    int a, b;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    double s = 1.0 * (gt(a) + gt(b)) / gt(a + b);
    cout << "S = " << s;
    return 0;
}