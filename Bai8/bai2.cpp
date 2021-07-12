#include <bits\stdc++.h>
using namespace std;
struct sach
{
    char ten[30];
    char nxb[50];
    int st;
};
void nhap(sach a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        cout <<"nhap sach thu "<< i << endl;
        cout <<"Ten sach :";
        gets(a[i].ten);
        fflush(stdin);
        cout <<"NXB :";
        gets(a[i].nxb);
        fflush(stdin);
        cout << "So trang :";
        cin >> a[i].st;
    }
}
void xuat(sach a[], int n, char *x)
{
    cout <<"TEN SACH DO NXB "<< x <<" AN HANH"<< endl;
    for (int i = 0; i < n; i++)
        if (strcmp(a[i].nxb, x) == 0)
            cout << a[i].ten << endl;
}
int main()
{
    sach a[100]; int n;
    cout <<"n =";
    cin >> n;
    nhap(a, n);
    xuat(a, n, "THANH NIEN");
    return 0;
}