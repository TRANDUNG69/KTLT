#include <bits\stdc++.h>
using namespace std;

void Nhap(float *a, int n, char k)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap " << k << "[" << i << "] = ";
        cin >> a[i];
    }
}

float Tinh(float *a, float *b, int n)
{
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i] * b[i];
    }
    return s;
}

int main()
{
    int n;
    float x[100], y[100];
    cout << "Nhap n = ";
    cin >> n;
    Nhap(x, n, 'x');
    Nhap(y, n, 'y');
    cout << "Tich vo huong = " << Tinh(x, y, n);
    return 0;
}