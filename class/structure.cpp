#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;
    int mathsmarks;
    int phymarks;
    int chemmarks;

public:
    student(int r, string n, int m, int p, int c)
    {
        roll = r;
        name = n;
        mathsmarks = m;
        phymarks = p;
        chemmarks = c;
    }
    int total()
    {
        return mathsmarks + phymarks + chemmarks;
    }
    char grade()
    {
        float average = total() / 3;
        if (average > 60)
            return 'A';
        else if (average >= 40 && average < 60)
            return 'B';
        else
            return 'C';
    }
};
int main()
{
    int roll;
    string name;
    int m, p, c;
    cout << "Enter Roll number of a Student:";
    cin >> roll;
    cout << "Enter Name of a student:";
    cin >> name;
    cout << "Enter marks in 3 Subjects";
    cin >> m>> p>> c;
    student s(roll, name, m, p, c);
    cout << "Total Marks:" << s.total() << endl;
    cout << "Grade of Student:" << s.grade() << endl;
    return 0;
}
