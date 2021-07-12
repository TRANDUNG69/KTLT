#include<bits\stdc++.h>
using namespace std;

void nhap(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout <<"a["<< i <<"] =";
        cin >> a[i];
    }
}
float CH1(float a[], int n)
{
    float T = 0;
    for (int i = 0; i < n; i++)
        T = T + fabs(a[i]);
    return T;
}
float CH2(float a[], int n)
{
    float T = 0;
    for (int i = 0; i < n; i++)
        T = T + a[i] * a[i];
    return sqrt(T);
}
float CHVC(float a[], int n)
{
    float T = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > T)
            T = a[i];
    return T;
}
int CH0(float a[], int n)
{
    int T = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != 0)
            T++;
    return T;
}
int main()
{
    float X[100];
    int n;
    cout << "n =";
    cin >> n;
    nhap(X, n);
    cout <<"Chuan 1 : "<< CH1(X, n) << endl;
    cout <<"Chuan 2 : "<< CH2(X, n) << endl;
    cout <<"Chuan vo cung : "<< CHVC(X, n) << endl;
    cout <<"Chuan 0 : "<< CH0(X, n) << endl;
    return 0;
}