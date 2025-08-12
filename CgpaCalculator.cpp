#include <iostream>
#include <vector>
#include<iomanip>
using namespace std;
int main()
{
    cout << "hello User!\n";
    int n;
    double totalGrade = 0.0;
    int totalCredit = 0;
    double cgpa;
    cout << "enter number of courses you have.\n";
    cin >> n;
    vector<double> grade(n);
    vector<int> creditHour(n);
    cout << "Enter Grades for each course and Credit\n";
    cout << "9.5 ---> A+  |  7.5 ---> C+\n9 ---> A     |   7 ---> C\n8.5 ---> B+  |   5-6 ---> D\n8 ---> B     |   0-4 ---> F\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Grade for Course" << i + 1 << " : ";
        cin >> grade[i];
        if (grade[i] < 0.0 || grade[i] > 10.0) {
            cout << "Invalid grade entered. Must be between 0.0 and 10.0.\n";
            return 1;
        }
        cout << "Enter the Credit Hours for Course" << i + 1 << " : ";
        cin >> creditHour[i];
        totalGrade += grade[i] * creditHour[i];
        totalCredit += creditHour[i];
    }
    cgpa = totalGrade / totalCredit;
    // details
    cout << "---------- Course Detail ----------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Course " << i + 1 << "  :  Grade = " << grade[i] << " , " << "Credit hours = " << creditHour[i] << endl;
    }
    cout << "------------ Result ------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Overall CGPA : " << cgpa << endl;
}