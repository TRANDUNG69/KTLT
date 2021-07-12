#include <bits\stdc++.h>
using namespace std;
void nhap(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout <<"a["<< i <<"] =";
        cin >> a[i];
    }
}
void KT(float a[], int n)
{
    int T, G, B;
    T = G = B = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
            T++;
        if (a[i] > a[i + 1])
            G++;
        if (a[i] == a[i + 1])
            B++;
    }
    if (B == n - 1)
        cout << "Bằng nhau";
    else if (T == n - 1)
        cout << "Mảng tăng ngặt";
    else if (G == n - 1)
        cout << "Mảng giảm ngặt";
    else if (T == 0 && B != 0)
        cout << "Mảng giảm";
    else if (G == 0 && B != 0)
        cout << "Mảng tăng";
    else
        cout << "Mảng chưa được sắp";
}
int main()
{
    float a[100];
    int n;
    cout << "n =";
    cin >> n;
    nhap(a, n);
    KT(a, n);
    return 0;
}