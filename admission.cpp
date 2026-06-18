#include<iostream>
using namespace std;

int main() {
    int examscore;
    double annualincome;

    cout << "Enter your exam score: ";
    cin >> examscore;
    cout << "Enter your annual income: ";
    cin >> annualincome;
if (examscore > 100 || examscore < 0) {
        cout << "Invalid exam score. Please enter a score between 0 and 100." << endl;
    }
   else if (examscore >= 85 && annualincome <  1500000) {
        cout << "approved for full Academic scholarship." << endl;
    }
    else if (examscore >= 85 && annualincome >= 1500000) {
        cout << "addmitted but regular fees apply." << endl;
    }
    else if (examscore <=84 && examscore >=50) {
        cout << "admitted into general studies." << endl;
    }
    else {
        cout << "appliation rejeted.Score falls below addmission threshold." << endl;
    }
    return 0;
}
