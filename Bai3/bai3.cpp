#include <bits\stdc++.h>
using namespace std;
void nhap(float &a)
{
    cout <<" =";
    cin >> a;
}
float MAX(float a, float b, float c)
{
    float M = a;
    if (b > M)
        M = b;
    if (c > M)
        M = c;
    return M;
}
float MIN(float a, float b, float c)
{
    float M = a;
    if (b < M)
        M = b;
    if (c < M)
        M = c;
    return M;
}
int main()
{
    float a, b, c, d, e;
    nhap(a);
    nhap(b);
    nhap(c);
    float T = MAX(a, b, c);
    float P = MIN(a, b, c);
    cout <<"MAX a, b, c :"<< T << endl;
    cout <<"MIN a, b, c :"<< P << endl;
    nhap(d);
    nhap(e);
    cout <<"MAX a, b, c, d, e :"<< MAX(T, d, e);
    cout <<"MIN a, b, c, d, e :"<< MIN(P, d, e);
    return 0;
}