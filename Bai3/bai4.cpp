#include<bits\stdc++.h>
using namespace std;
int GPTB2(float a, float b, float c, float &x1, float &x2)
{
    if (a == 0)
        return 1;
    else
    {
        float dt = b * b - 4 * a * c;
        if (dt < 0)
            return 2;
        else
        {
            x1 = (-b + sqrt(dt)) / (2 * a);
            x2 = (-b - sqrt(dt)) / (2 * a);
            return 3;
        }
    }
}
int main()
{
    float a, b, c, x1, x2;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    cout << " c = ";
    cin >> c;
    int k = GPTB2(a, b, c, x1, x2);
    if (k == 1)
        cout << "Không phải phương trình bậc 2";
    else if (k == 2)
        cout << "Phương trình vô nghiệm";
    else if (k == 3)
        cout << "X1 ="<< x1 <<" và X2 ="<< x2;
    return 0;
}