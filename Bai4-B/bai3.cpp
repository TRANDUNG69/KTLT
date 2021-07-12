#include <bits\stdc++.h>
using namespace std;
void nhap(int **a, int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
}
void xuat(int **a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
void FLATTEN(int **a, int n, int m)
{
    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j < m - 1; j++)
        {
            a[i][j] = (a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1]) / 4;
        }
}
int main()
{
    int n, m;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
        a[i] = new int[m];
    nhap(a, n, m);
    cout << "MA TRAN A VUA NHAP: " << endl;
    xuat(a, n, m);
    FLATTEN(a, n, m);
    cout << "MA TRAN A DA LAM PHANG: " << endl;
    xuat(a, n, m);
    return 0;
}