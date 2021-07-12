#include <bits\stdc++.h>
using namespace std;
struct nhamay
{
    char TNM[50];
    char DC[100];
    int SCN;
};
void nhap(nhamay &x)
{
    cout <<"Ten nha may : ";
    fflush(stdin);
    gets(x.TNM);
    cout <<"Dia chi : ";
    fflush(stdin);
    gets(x.DC);
    cout <<"So cong nhan :";
    cin >> x.SCN;
}
void xuat(nhamay x)
{
    cout << endl
         <<"Ten nha may : "<< x.TNM << endl;
    cout <<"Dia chi : "<< x.DC << endl;
    cout <<"So cn : "<< x.SCN << endl;
}
void sap(nhamay a[], int n)
{
    for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
        if (a[i].SCN > a[j].SCN)
        {
            nhamay tg = a[i];
            a[i] = a[j];
            a[j] = tg;
        }
}
float TB(nhamay a[], int n)
{
    int T = 0;
    for (int i = 0; i < n; i++)
        T = T + a[i].SCN;
    return (float)T / n;
}
void xoa(nhamay a[], int &n, int p)
{
    for (int i = 0; i < n; i++)
        while (a[i].SCN < p)
        {
            for (int j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
        }
}
void chen(nhamay a[], int &n, int k, nhamay x)
{
    for (int i = n - 1; i >= k; i--)
        a[i + 1] = a[i];
    a[k] = x;
    n++;
}
bool KT(nhamay a[], int n, char *Ten)
{
    for (int i = 0; i < n; i++)
        if (strcmp(a[i].TNM, Ten) == 0)
            return true;
    return false;
}
int main()
{
    nhamay a[100];
    int n;
    cout <<"n =";
    cin >> n;
    for (int i = 0; i < n; i++)
        nhap(a[i]);
    sap(a, n);
    cout <<"danh sach sau khi SAP la "<< endl;
    for (int i = 0; i < n; i++)
        xuat(a[i]);
    cout <<"SL CN TB ="<< TB(a, n) << endl;
    xoa(a, n, 5);
    cout <<"danh sach sau khi xoa la "<< endl;
    for (int i = 0; i < n; i++)
        xuat(a[i]);
    int k;
    nhamay x;
    cout <<"k =";
    cin >> k;
    nhap(x);
    chen(a, n, k, x);
    cout <<"danh sach sau khi chen la "<< endl;
    for (int i = 0; i < n; i++)
        xuat(a[i]);
    char Ten[50];
    cout << "Ten nha may = ";
    fflush(stdin);
    gets(Ten);
    if (KT(a, n, Ten))
        cout << "Nha may " << Ten << " co trong ds";
    else
        cout << "Nha may " << Ten << " khong co trong ds";
    return 0;
}
 