/* TASK-3
STUDENT GRADING SYSTEM
Create a program that manages student grades. Allow the user
to input student names and their corresponding grades.
Calculate the average grade and display it along with the highest
and lowest grades*/

#include <bits/stdc++.h>
using namespace std;
const char *findGrade(float mark[], int n)
{
    int i;
    float sum = 0, avg;
    for (i = 0; i < n; i++)
        sum = sum + mark[i];
    avg = sum / n;
    if (avg >= 91 && avg <= 100)
        return "O";
    else if (avg >= 81 && avg <= 91)
        return "E";
    else if (avg >= 71 && avg <= 81)
        return "A+";
    else if (avg >= 61 && avg <= 71)
        return "A";
    else if (avg >= 51 && avg <= 61)
        return "B+";
    else if (avg >= 41 && avg <= 51)
        return "B";
    else if (avg >= 31 && avg <= 21)
        return "C";
    else if (avg >= 21 && avg <= 31)
        return "D";
    else if (avg >= 0 && avg <= 21)
        return "F";
    else
        return "INVALIDE!";
}
int main()
{
    cout << endl;
    int i, n;
    float mark[10];
    cout << "Enter number of subjects (Max:10): ";
    cin >> n;
    cout << "Enter marks obtained in " << n << "subjects:" << endl;
    for (i = 0; i < n; i++)
        cin >> mark[i];
    cout << "Grade = " << findGrade(mark, n);
    cout << endl;
    return 0;
}