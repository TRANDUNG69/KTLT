#include <bits\stdc++.h>
using namespace std;
void nhap(int &n, char k)
{
    cout << k << "=";
    cin >> n;
}
float TBC(int n, int m)
{
    return (float)(n + m) / 2;
}
int HIEU(int n, int m)
{
    return n - m;
}
int TONG(int n, int m)
{
    int T = 0;
    for (int i = n; i <= m; i++)
        if (i % 2 == 1)
            T += i;
    return T;
}
int main()
{
    int n, m;
    nhap(n, 'n');
    nhap(m, 'm');
    cout << "Trung binh = " << TBC(n, m) << endl;
    cout << "Hieu = "<< HIEU(n, m) << endl;
    cout << "Tong cac so le = " << TONG(n, m) << endl;
    return 0;
}