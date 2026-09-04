#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cpm(Student a, Student b)
{
    // This can be written in a shorter way:
    // return a.marks <= b.marks;
    // It does the same job because it returns either true or false.

    // if (a.marks <= b.marks)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    // return a.marks <= b.marks;

    /*
        If two students have the same marks, then sort them
        according to their roll numbers from smaller to larger.
    */

    // if (a.marks <= b.marks)
    // {
    //     return true;
    // }
    // else if (a.marks >= b.marks)
    // {
    //     return false;
    // }
    // else
    // {
    //     // if (a.roll < b.roll)
    //     // {
    //     //     return true;
    //     // }
    //     // else
    //     // {
    //     //     return false;
    //     // }

    //     return a.roll < b.roll;
    // }

    // We can also write the comparison in this shorter way.
    if (a.marks == b.marks)
    {
        // If marks are equal, the smaller roll number comes first.
        return a.roll < b.roll;
    }
    else
    {
        // Otherwise, the student with smaller marks comes first.
        return a.marks < b.marks;
    }
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        // Ignore the leftover newline before using getline().
        cin.ignore();

        // Read the student's full name.
        getline(cin, a[i].name);

        // Read the student's roll number and marks.
        cin >> a[i].roll >> a[i].marks;
    }

    /*
        The built-in sort() function already knows how to compare
        built-in data types such as int, float, etc.

        But here, our data type is Student, which is a user-defined
        data type. The sort() function does not automatically know
        how two Student objects should be compared.

        Therefore, we create our own Boolean comparison function.

        The comparison function:
        - takes two Student objects as parameters.
        - compares them according to our required condition.
        - returns true or false.

        If it returns true, sort() considers the first object
        to be in the correct order relative to the second object.

        Here, we are sorting:
        1. Marks in ascending order.
        2. If marks are equal, roll numbers in ascending order.
    */

    sort(a, a + n, cpm);

    // Print the students after sorting.
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " "
             << a[i].roll << " "
             << a[i].marks << endl;
    }

    return 0;
}