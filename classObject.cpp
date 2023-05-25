#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int id;
    char name[101];
    int age;
    char subject;
    int roll;
    int cls;
};

int main()
{
    Student s, m;
    s.id = 25;
    char nm[101] = "Srayo";
    strcpy(s.name, nm);
    s.age = 10;
    s.subject = 'c';
    s.roll = 14;
    s.cls = 12;

    cout << s.id << " " << s.name << " " << s.age << " " << s.subject << " " << s.roll << " " << s.cls << endl;

    m.id = 25;
    char nms[101] = "Mari";
    strcpy(m.name, nms);
    m.age = 10;
    m.subject = 'b';
    m.roll = 14;
    m.cls = 12;

    cout << m.id << " " << m.name << " " << m.age << " " << m.subject << " " << m.roll << " " << m.cls << endl;
    return 0;
}