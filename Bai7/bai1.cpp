#include <bits\stdc++.h>
using namespace std;
void WriteFile(char *filename)
{
    ofstream f(filename, ios::out);
    f << "Problem name: exp1" << endl;
    f << "Maximize" << endl;
    f << "obj:\t\t\t x1 + 2 x2 + 3 x3 + x4" << endl;
    f << "Subject To" << endl;
    f << "\t c1: x2 - 3.5 x4 = 0" << endl;
    f << "Bounds" << endl;
    f << "\t 0 <= x1 <= 40" << endl;
    f << "General" << endl;
    f << "\t x4" << endl;
    f.close();
}
void ReadFile(char *filename)
{
    ifstream f(filename, ios::in);
    char s[255];
    while (!f.eof())
    {
        f.getline(s, 255);
        cout << s << endl;
    }
    f.close();
}
int main()
{
    WriteFile("FIRSTFILE.TXT");
    ReadFile("FIRSTFILE.TXT");
    return 0;
}