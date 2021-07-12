#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    float *a = new float[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
    int max = 0, min = 0;
    for (int i = 0; i < n; i++)
    {
        max = (max > a[i]) ? max : a[i];
        min = (min < a[i]) ? min : a[i];
    }
    cout << "Max = " << max << endl;
    cout << "Min = " << min;
    return 0;
}