#include <bits\stdc++.h>
using namespace std;
void CREATE_FILE(char *file1, char *file2)
{
    ofstream f(file1, ios::out);
    f << "7 2" << endl;
    f << "1 2 3 1" << endl;
    f << "2 2 4 1" << endl;
    f << "3 3 5 1" << endl;
    f.close();
    f.open(file2, ios::out);
    f << "4 1 1 2" << endl;
    f << "5 2 2 2" << endl;
    f << "6 3 3 2" << endl;
    f << "7 4 4 2" << endl;
    f.close();
}
void READ_WRITE(char *file1, char *file2, char *file3)
{
    //Mở tệp 1 để đọc và ghi vào tệp 3
    ifstream f(file1, ios::in);
    ofstream f3(file3, ios::out);
    char s[255];
    while (!f.eof())
    {
        f.getline(s, 255);
        f3 << s << endl;
    }
    f.close();
    f3.close();
    //Mở tệp 2 để đọc và ghi bổ sung vào tệp 3
    f.open(file2, ios::in);
    f3.open(file3, ios::app);
    while (!f.eof())
    {
        f.getline(s, 255);
        f3 << s << endl;
    }
    f.close();
    f3.close();
}
void READ_FILE(char *filename)
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
    CREATE_FILE("FILE1.TXT", "FILE2.TXT");
    READ_WRITE("FILE1.TXT", "FILE2.TXT", "FILE3.TXT");
    READ_FILE("FILE3.TXT");
    return 0;
}