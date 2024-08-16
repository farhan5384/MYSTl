#include <iostream>
#include <string>
#include <algorithm> // For std::swap

using namespace std;

struct student {
    string name;
    int marks;
};

int main() {
    student cse[5];

    // Taking input for the names and marks
    for (int i = 0; i < 5; ++i) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> cse[i].name;
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> cse[i].marks;
    }

    // Sorting students based on marks (descending) and names (ascending)
    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (cse[i].marks < cse[j].marks) {
                swap(cse[i].marks, cse[j].marks);
                swap(cse[i].name, cse[j].name);
            } else if (cse[i].marks == cse[j].marks && cse[i].name > cse[j].name) {
                swap(cse[i].name, cse[j].name);
            }
        }
    }

    // Display sorted students
    cout << "\nSorted Student List:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Name: " << cse[i].name << ", Marks: " << cse[i].marks << endl;
    }

    return 0;
}
