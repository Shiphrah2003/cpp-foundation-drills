#include<iostream>
#include <string>

using namespace std;

int main() {
    string studentName;
    double grade;

    cout << "Enter student grade (0-100): ";
    cin >> grade;

    cout << "\n--- Student Report ---" << endl;
    cout << "Name: "<<studentName << endl;
    cout << "Grade: "<< grade << "%" << endl;
    
    if (grade >=50) {
        cout << "Status : passed!" << endl;
    }
    else {
        cout << "Status: Failed.Needs improvement." <<endl;

    }
    return 0;
}