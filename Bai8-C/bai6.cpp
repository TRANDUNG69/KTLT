#include <bits\stdc++.h>
using namespace std;
struct sv
{
    char masv[50];
    char tensv[50];
    char lop[50];
    char khoa[20];
};
struct mon
{
    char tenm[50];
    int sotrinh;
    float diem;
};
struct PHIEUDIEM
{
    sv a;
    int n;
    mon B[100];
};
void nhap(PHIEUDIEM &x)
{
    cout << "MA SV: ";
    gets(x.a.masv);
    fflush(stdin);
    cout << "TEN SV: ";
    gets(x.a.tensv);
    fflush(stdin);
    cout << "LOP : ";
    gets(x.a.lop);
    fflush(stdin);
    cout << "KHOA : ";
    gets(x.a.khoa);
    fflush(stdin);
    cout << "NHAP SO MON:";
    cin >> x.n;
    for (int i = 0; i < x.n; i++)
    {
        fflush(stdin);
        cout << "NHAP DIEM CUA MON THU " << i + 1 << endl;
        cout << "TEN MON: ";
        gets(x.B[i].tenm);
        fflush(stdin);
        cout << "SO TRINH: ";
        cin >> x.B[i].sotrinh;
        cout << "DIEM : ";
        cin >> x.B[i].diem;
        cout << endl;
    }
}
void xuat(PHIEUDIEM x)
{
    cout << " PHIEU BAO DIEM" << endl
         << endl;
    cout << setw(15) << "Ma sv: " << setw(15) << x.a.masv;
    cout << setw(15) << "Ten sv: " << setw(15) << x.a.tensv << endl;
    cout << setw(15) << "Lop : " << setw(15) << x.a.lop;
    cout << setw(15) << "Khoa : " << setw(15) << x.a.khoa << endl
         << endl;
    cout << "Bang diem " << endl;
    cout << setw(15) << "TEN MON" << setw(15) << "SO TRINH" << setw(15) << "DIEM" << endl;
    for (int i = 0; i < x.n; i++)
        cout << setw(15) << x.B[i].tenm << setw(15) << x.B[i].sotrinh << setw(15) << x.B[i].diem << endl;
    float T = 0;
    for (int i = 0; i < x.n; i++)
        T = T + x.B[i].diem;
    cout << endl
         << "Diem trung binh: " << T / x.n << endl;
}
int main()
{
    PHIEUDIEM x;
    nhap(x);
    xuat(x);
    return 0;
}