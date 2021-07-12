#include <bits\stdc++.h>
using namespace std;
void nhap(float *&a, int &n)
{
    cout << "n=";
    cin >> n;
    a = new float[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
}
void xuat(float *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
void taofile(char *filename, float *a, int n)
{
    ofstream f(filename, ios::out);
    f << n << endl;
    for (int i = 0; i < n; i++)
        f << a[i] << " ";
    f << endl;
    for (int i = 0; i < n; i++)
        if (i > 0)
            if (a[i] >= 0)
                f << " + " << a[i] << " x" << i;
            else
                f << " - " << fabs(a[i]) << " x" << i;
        else
            f << a[i] << " x" << i;
    f.close();
}
void docfile(char *filename)
{
    ifstream f(filename, ios::in);
    char Buff[255];
    while (!f.eof())
    {
        f.getline(Buff, 255);
        cout << Buff << endl;
    }
    f.close();
}
int main()
{
    int n;
    float *a;
    nhap(a, n);
    taofile("DATHUC.txt", a, n);
    cout << "Noi dung tep:" << endl;
    docfile("DATHUC.txt");
    return 0;
}