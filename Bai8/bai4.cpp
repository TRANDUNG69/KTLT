#include <bits\stdc++.h>
using namespace std;
struct DATE
{
    int D, M, Y;
};
struct sv
{
    char masv[10];
    char hoten[30];
    DATE ns;
};
void nhap_ds(sv a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout <<"nhap sv thu "<< i << endl;
        cout <<"Ma sv :";
        gets(a[i].masv);
        fflush(stdin);
        cout <<"Ho ten :";
        gets(a[i].hoten);
        fflush(stdin);
        cout << "Nhap ngay sinh :" << endl;
        cout <<"ngay : ";
        cin >> a[i].ns.D;
        cout <<"thang : ";
        cin >> a[i].ns.M;
        cout <<"nam : ";
        cin >> a[i].ns.Y;
    }
}
int dem(sv a[], int n)
{
    int d = 0;
    for (int i = 0; i < n; i++)
        if (a[i].ns.M == 12)
            d++;
    return d;
}
int main()
{
    sv a[100];
    int n;
    cout <<"n =";
    cin >> n;
    nhap_ds(a, n);
    cout <<"So sv sinh thang 12 la : "<< dem(a, n) << endl;
    return 0;
}