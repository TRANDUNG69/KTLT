#include <bits\stdc++.h>
using namespace std;
int main()
{
    float x1, x2, y1, y2, x3, y3;
    cout <<"x1 = ";
    cin >> x1;
    cout <<"y1 = ";
    cin >> y1;
    cout <<"x2 = ";
    cin >> x2;
    cout <<"y2 = ";
    cin >> y2;
    cout <<"x3 = ";
    cin >> x3;
    cout <<"y3 = ";
    cin >> y3;
    float x = (x1 + x2 + x3) / 3;
    float y = (y1 + y2 + y3) / 3;
    float A = sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
    float B = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
    float C = sqrt((x3 - x) * (x3 - x) + (y3 - y) * (y3 - y));
    float Inter = A + B + C;
    cout <<"Inter = "<< Inter << endl;
    return 0;
}