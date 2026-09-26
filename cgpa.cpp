#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    vector<float> grades(n), credits(n);

    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter Grade Point: ";
        cin >> grades[i];

        cout << "Enter Credit Hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n----- Course Details -----\n";
    for (int i = 0; i < n; i++) {
        cout << "Course " << i + 1
             << " -> Grade: " << grades[i]
             << ", Credits: " << credits[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << fixed << setprecision(2);
    cout << "CGPA: " << cgpa << endl;

    return 0;
}