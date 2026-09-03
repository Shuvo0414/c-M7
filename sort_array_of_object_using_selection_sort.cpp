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
        Here, we are sorting an array of Student objects.

        Each element of the array is a complete Student object,
        so when we swap two elements, we need to swap the
        complete objects, not only their marks or roll numbers.

        Our sorting conditions are:

        1. Students with higher marks should come first.
           Therefore, we sort marks in descending order.

        2. If two students have the same marks, the student
           with the smaller roll number should come first.
           Therefore, we sort the roll numbers in ascending order
           when the marks are equal.
    */

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // If the current student has higher marks,
            // swap the complete Student objects.
            if (a[i].marks < a[j].marks)
            {
                swap(a[i], a[j]);
            }

            // If the marks are equal, compare the roll numbers.
            if (a[i].marks == a[j].marks)
            {
                // The student with the smaller roll number
                // should come first.
                if (a[i].roll > a[j].roll)
                {
                    // Swap the complete objects so that
                    // name, roll, and marks stay together.
                    swap(a[i], a[j]);
                }
            }
        }
    }

    // Print the students after sorting.
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " "
             << a[i].roll << " "
             << a[i].marks << endl;
    }

    /*
    input :
    2
    Shuvo Biswas
    9 90
    Deng Hui
    10 99

    output:
    Deng Hui 10 99
    Shuvo Biswas 9 90

    */

    return 0;
}