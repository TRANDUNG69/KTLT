#include <bits\stdc++.h>
using namespace std;
void nhap(float &x, float &y, char k)
{
    cout <<"Nhap diem "<< k << endl;
    cout <<"x =";
    cin >> x;
    cout <<"y =";
    cin >> y;
}
float KCE(float x1, float y1, float x2, float y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int MIND(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float D1 = KCE(x1, y1, 0, 0);
    float D2 = KCE(x2, y2, 0, 0);
    float D3 = KCE(x3, y3, 0, 0);
    if (D1 < D2 && D1 < D3)
        return 1;
    if (D2 < D1 && D2 < D3)
        return 2;
    if (D3 < D1 && D3 < D2)
        return 3;
    if (D1 == D2 && D1 == D3)
        return 4;
}
int MAXD(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float D1 = KCE(x1, y1, 0, 0);
    float D2 = KCE(x2, y2, 0, 0);
    float D3 = KCE(x3, y3, 0, 0);
    if (D1 > D2 && D1 > D3)
        return 1;
    if (D2 > D1 && D2 > D3)
        return 2;
    if (D3 > D1 && D3 > D2)
        return 3;
}
int main()
{
    float x1, y1, x2, y2, x3, y3;
    nhap(x1, y1,'A');
    nhap(x2, y2,'B');
    nhap(x3, y3,'C');
    int T = MIND(x1, y1, x2, y2, x3, y3);
    if (T == 1)
        cout << "Diem gan O nhat la A" << endl;
    if (T == 2)
        cout << "Diem gan O nhat la B" << endl;
    if (T == 3)
        cout << "Diem gan O nhat la C" << endl;
    if (T == 4)
        cout << "BA DIEM CACH DEU O" << endl;
    int K = MAXD(x1, y1, x2, y2, x3, y3);
    if (K == 1)
        cout << "Diem XA O nhat la A" << endl;
    if (K == 2)
        cout << "Diem XA O nhat la B" << endl;
    if (K == 3)
        cout << "Diem XA O nhat la C" << endl;
    return 0;
}