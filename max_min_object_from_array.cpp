#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        // Ignore the leftover newline before using getline().
        cin.ignore();

        // Read the student's full name, including spaces.
        getline(cin, a[i].name);

        // Read the student's roll number and marks.
        cin >> a[i].roll >> a[i].marks;
    }

    /*
        Here, 'max' and 'mn' are complete Student objects.

        So, if we want to find the student with the maximum
        or minimum marks, we need to compare the Student objects
        based on their marks.

        We could compare other properties as well, such as
        the roll number, but here we are comparing marks.

        When we find the student with the maximum or minimum marks,
        we need to store the entire Student object, not only the marks.

        This is because later we want to print the complete information
        of that student, such as name, roll, and marks.
    */

    Student max;
    max.marks = INT_MIN;

    Student mn;
    mn.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // Check whether the current student's marks
        // are greater than the current maximum marks.
        if (a[i].marks > max.marks)
        {
            // Store the entire Student object in max.
            // This copies the name, roll, and marks together.
            max = a[i];
        }

        // Check whether the current student's marks
        // are smaller than the current minimum marks.
        if (a[i].marks < mn.marks)
        {
            // Store the entire Student object in mn.
            // This copies the name, roll, and marks together.
            mn = a[i];
        }
    }

    // Print the complete information of the student
    // with the maximum marks.
    cout << max.name << " " << max.roll << " " << max.marks << endl;

    // Print the complete information of the student
    // with the minimum marks.
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;

    return 0;
}