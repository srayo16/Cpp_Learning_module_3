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
    Student srayo(4, "srayo", 4, "s", 4, 4);
    srayo.show();
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//         char name[100];
//         int roll;
//         int cls;
//         char section;

//         Student(int r,int s,int c,char* n)
//         {
//             roll=r;
//             section=s;
//             cls=c;
//             strcpy(name,n);
//         }
// };
// int main()
// {
//     Student rahim(29,'A',7,"Rahim Ullah");
//     Student karim(55,'D',7,"Karim Cholimullah");

//     cout<<karim.roll<<endl;
//     cout<<rahim.roll<<endl;
//     return 0;
// }