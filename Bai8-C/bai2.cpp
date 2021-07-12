#include <bits\stdc++.h>
using namespace std;
void nhap(int *a, int n){
    for(int i = 0; i < n; i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}
void xuat(int *a, int n){
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
}
void sap(int *a, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int COUNT(int *a, int n)
{
    int D = 0;
    for (int i = 0; i < n; i++)
        if (a[i] >= 10 && a[i] <= 20)
            D++;
    return D;
}
bool Check(int *a, int n)
{
    for (int i = 0; i < n - 2; i++)
        if (a[i] % 2 == 0 && a[i + 1] % 2 == 0 && a[i + 2] % 2 == 0)
            return true;
    return false;
}
int main()
{
    int n, *a;
    cout << "n=";
    cin >> n;
    a = new int[n];
    nhap(a, n);
    sap(a, n);
    xuat(a, n);
    cout << "So pt thuoc [10, 20]: " << COUNT(a, n) << endl;
    if (Check(a, n))
        cout << "co ton tai 3 so chan lien tiep";
    else
        cout << "Khong ton tai 3 so chan lien tiep";
    return 0;
}