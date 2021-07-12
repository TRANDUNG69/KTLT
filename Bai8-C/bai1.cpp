#include <bits\stdc++.h>
using namespace std;
void nhap(float &x, char k)
{
    cout << k <<"=";
    cin >> x;
}
void nhap(int &n)
{
    cout << "n=";
    cin >> n;
}
float dt(float x, float y)
{
    return x * y;
}
int TC(int n)
{
    int t = 0;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0 && i % 3 == 0)
            t += i;
    return t;
}
float F1(float x, int n)
{
    float T = 2016 * pow(x, n);
    for (int i = 1; i <= n; i++)
        T += pow(x, i) / pow(3, i);
    return T;
}
float F2(float x, int n)
{
    float T;
    if (n > 10)
        T = 2016 * x;
    else
    {
        T = exp(x);
        for (int i = 1; i <= n; i++)
            T += i;
    }
    return T;
}
int main()
{
    float x, y;
    int n;
    nhap(x, 'x');
    nhap(y, 'y');
    nhap(n);
    cout <<"Dien tich HCN : "<< dt(x, y) << endl;
    cout <<"Tong = "<< TC(n) << endl;
    cout <<"F1 = "<< F1(x, n) << endl;
    cout <<"F2 = "<< fixed << F2(x, n) << endl;
    return 0;
}