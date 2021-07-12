#include <bits\stdc++.h>
using namespace std;
int main()
{
    float a, b, c;
    cout <<"a = ";
    cin >> a;
    cout <<"b = ";
    cin >> b;
    cout <<"c = ";
    cin >> c;
    if (a == 0)
        cout <<" Không phải phương trình bậc 2";
    else
    {
        float dt = b * b - 4 * a * c;
        if (dt < 0)
            cout << "Phương trình vô nghiệm";
        else if (dt == 0)
            cout << "Phương trình có nghiệm kép =" << -b / (2 * a);
        else
        {
            cout << "X1 =" << (-b + sqrt(dt)) / (2 * a);
            cout << "X2 =" << (-b - sqrt(dt)) / (2 * a);
        }
    }
    return 0;
}