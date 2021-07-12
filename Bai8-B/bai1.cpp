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
    fflush(stdin);
    cout <<"Ten nha may : ";
    gets(x.TNM);
    fflush(stdin);
    cout <<"Dia chi : ";
    gets(x.DC);
    fflush(stdin);
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
int main()
{
    nhamay a[100];
    int n;
    cout <<"n =";
    cin >> n;
    for (int i = 0; i < n; i++)
        nhap(a[i]);
    cout <<"danh sach vua nhap la "<< endl;
    for (int i = 0; i < n; i++)
        xuat(a[i]);
    return 0;
}
