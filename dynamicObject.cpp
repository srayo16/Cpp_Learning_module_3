#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    int age;
    string subject;
    int roll;
    int cls;

    Student(int i, char *n, int a, string s, int r, int c)
    {
        id = i;
        strcpy(name, n);
        age = a;
        subject = s;
        roll = r;
        cls = c;
    }

    void show()
    {
        cout << id << " " << name << " " << age << " " << subject << " " << roll << " " << cls << endl;
    }
};

int main()
{
    // Student srayo(4, "srayo", 4, "s", 4, 4);

    Student *srayo = new Student(4, "srayo", 4, "s", 4, 4);

    // (*srayo).show();
    srayo->show();

    delete srayo;

    return 0;
}