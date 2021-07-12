#include <bits\stdc++.h>
using namespace std;
struct ns
{
    char ht[30];
    char dc[50];
    float L;
};
void nhap(ns a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout <<"nhap ns thu "<< i << endl;
        cout <<"Ho ten :";
        gets(a[i].ht);
        fflush(stdin);
        cout <<"Dia chi :";
        gets(a[i].dc);
        fflush(stdin);
        cout << "Luong :";
        cin >> a[i].L;
    }
}
void xuat(ns a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout <<"nhan su thu "<< i << endl;
        cout <<"Ho ten ="<< a[i].ht << endl;
        cout <<"Dia chi = "<< a[i].dc << endl;
        cout << "Luong=" << a[i].L << endl;
    }
}
float Tong_L(ns a[], int n)
{
    float T = 0;
    for (int i = 0; i < n; i++)
        T = T + a[i].L;
    return T;
}
int main()
{
    ns a[100];
    int n;
    cout <<"n =";
    cin >> n;
    nhap(a, n);
    cout <<"Tong Luong = "<< Tong_L(a, n) << endl;
    xuat(a, n);
    return 0;
}