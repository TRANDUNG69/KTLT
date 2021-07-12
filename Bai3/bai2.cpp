#include <bits\stdc++.h>
using namespace std;
float F(float x, int n)
{
    return 2 * x * x + n * x + n;
}
int main()
{
    float x, y;
    int n;
    cout << "x =";
    cin >> x;
    cout << "y =";
    cin >> y;
    cout << "n =";
    cin >> n;
    float P = F(x, n) + F(y, n) - F(x + y, n);
    cout <<"P = " << P;
    return 0;
}