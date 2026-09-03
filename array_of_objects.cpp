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

    // Create an array of Student objects.
    // The size of the array is determined by the number of students.
    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        // Ignore the leftover newline before using getline().
        // This allows getline() to read the complete name, including spaces.
        cin.ignore();

        // Read the student's full name.
        getline(cin, ar[i].name);

        // Read the student's roll number and marks.
        cin >> ar[i].roll >> ar[i].marks;
    }

    // Print the information of all students.
    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " "
             << ar[i].roll << " "
             << ar[i].marks << endl;
    }

    return 0;
}