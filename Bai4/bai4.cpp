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
void sap(float a[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[j] > a[i])
            {
                float tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
    int L = 0, R = n - 1;
    while (a[L] == a[0])
        L++;
    while (a[R] == a[n - 1])
        R--;
    for (int i = L; i <= R; i++)
        for (int j = i + 1; j <= R; j++)
            if (a[j] < a[i])
            {
                float tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
}
void xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] <<" ";
}
int main()
{
    float a[100];
    int n;
    cout <<"n =";
    cin >> n;
    nhap(a, n);
    sap(a, n);
    xuat(a, n);
    return 0;
}