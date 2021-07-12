#include <bits\stdc++.h>
using namespace std;
void nhap(float **a, int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
}
void xuat(float **a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
void MAX_ROW(float **a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        float M = a[i][0];
        for (int j = 0; j < m; j++)
            if (a[i][j] > M)
                M = a[i][j];
        cout << "MAX dong " << i + 1 << " = " << M << endl;
    }
}
void MIN_COLUMN(float **a, int n, int m)
{
    for (int j = 0; j < m; j++)
    {
        float M = a[0][j];
        for (int i = 0; i < n; i++)
            if (a[i][j] < M)
                M = a[i][j];
        cout << "MIN cot " << j + 1 << " = " << M << endl;
    }
}
void chuyenvi(float **a, float **&b, int n, int m)
{
    b = new float *[m];
    for (int i = 0; i < m; i++)
        b[i] = new float[n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            b[i][j] = a[j][i];
}
void doidau(float **a, int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = -a[i][j];
}
void DEM(float **a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int d = 0;
        for (int j = 0; j < m; j++)
            if (a[i][j] > 0)
                d++;
        cout << "Dong " << i + 1 << " co " << d << " pt duong" << endl;
    }
}
int main()
{
    int n, m;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    float **a = new float *[n];
    for (int i = 0; i < n; i++)
        a[i] = new float[m];
    nhap(a, n, m);
    cout << "MA TRAN A VUA NHAP: " << endl;
    xuat(a, n, m);
    MAX_ROW(a, n, m);
    MIN_COLUMN(a, n, m);
    float **b;
    chuyenvi(a, b, n, m);
    cout << "MA TRAN CHUYEN VI: " << endl;
    xuat(b, m, n);
    doidau(a, n, m);
    cout << "MA TRAN A DA DOI DAU: " << endl;
    xuat(a, n, m);
    DEM(a, n, m);
    return 0;
}