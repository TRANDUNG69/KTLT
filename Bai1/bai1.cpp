#include <bits\stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout <<"a = ";
    cin >> a;
    cout <<"b = ";
    cin >> b;
    int T = a + b;
    int H = a - b;
    int Ti = a * b;
    float Th = (float)a / b;
    int D = a % b;
    cout <<"Tong = "<< T << endl;
    cout <<"Hieu = "<< H << endl;
    cout <<"Tich = "<< Ti << endl;
    cout <<"Thuong = "<< Th << endl;
    cout <<"Dong du = "<< D << endl;
    return 0;
}