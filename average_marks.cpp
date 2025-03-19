

#include <iostream>
using namespace std;

int main() {
    // let's first define the number of subjects and tests
    const int numSubjects = 3;
    const int numTests = 4;

    // now let's Define the subjects
    string subjects[numSubjects] = {"Physics", "Chemistry", "Math"};

    //here we are  Defining a 2D array to store the marks for each subject and test
    double marks[numSubjects][numTests];

    // Input marks for each subject and test
    for (int i = 0; i < numSubjects; ++i) {
        cout << "Enter marks for " << subjects[i] << ":\n";
        for (int j = 0; j < numTests; ++j) {
            switch (j) {
                case 0:
                    cout << "  Assignment: ";
                    break;
                case 1:
                    cout << "  Coursework: ";
                    break;
                case 2:
                    cout << "  Mid-term: ";
                    break;
                case 3:
                    cout << "  End-of-term: ";
                    break;
            }
            cin >> marks[i][j];
        }
    }

    // here we Calculate the average for each subject
    double averages[numSubjects] = {0};

    for (int i = 0; i < numSubjects; ++i) {
        for (int j = 0; j < numTests; ++j) {
            averages[i] += marks[i][j];
        }
        averages[i] /= numTests;
    }

    // Display the averages
    cout << "\nAverage marks:\n";
    for (int i = 0; i < numSubjects; ++i) {
        cout << subjects[i] << ": " << averages[i] << endl;
    }

    return 0;
}
