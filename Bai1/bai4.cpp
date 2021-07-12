#include <bits\stdc++.h>
using namespace std;
int main()
{
    float x1, x2, y1, y2;
    cout <<"x1 = ";
    cin >> x1;
    cout <<"y1 = ";
    cin >> y1;
    cout <<"x2 = ";
    cin >> x2;
    cout <<"y2 = ";
    cin >> y2;
    float D = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    float M = fabs(x2 - x1) + fabs(y2 - y1);
    double C = 1-(x1 * x2 + y1 * y2) / (sqrt(x1 * x1 + y1 * y1) * sqrt(x2 * x2 + y2 * y2));
    cout <<"Khoang cach Euclidien :"<< D << endl;
    cout <<"Khoang cach Manhattan :"<< M << endl;
    cout <<"Khoang cach Cosin : "<< setprecision(6) << fixed << C << endl;
    return 0;
}
