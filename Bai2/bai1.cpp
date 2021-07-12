#include<bits\stdc++.h>
using namespace std;
int main()
{
    float SoTien;
    cout << "Nhap so tien";
    cin >> SoTien;
    float KM = 0;
    if (SoTien >= 300)
        KM = SoTien * 0.3;
    else if (SoTien >= 200)
        KM = SoTien * 0.2;
    cout << "Tien khuyen mai =" << KM;
    return 0;
}