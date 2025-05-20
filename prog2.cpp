#include <iostream>
using namespace std;

class Student {
protected:
    string name;

public:
    void setName() {
        cout << "Enter student name: ";
        getline(cin, name);
    }
};
class Marks : public Student {
public:
    int subject_mark[5];

public:
    void setMarks() {
        cout << "Enter marks for 5subjects:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> subject_mark[i];
        }

    }
};

class Result : public Marks {
private:
    int total = 0;
    float percentage = 0;

public:
    void calculateResult() {
        for (int i = 0; i < 5; i++) {
            total += subject_mark[i];
        }
        percentage = total / 5;
    }

    void displayResult() {
        cout << "Student Name: " << name << endl;
        cout << "Marks: "<<endl;
        for (int i = 0; i < 5; i++) {
            cout << subject_mark[i] << " ";
            cout<<endl;
        }
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
int main() {
    Result rst;
    rst.setName();
    rst.setMarks();
    rst.calculateResult();
    rst.displayResult();

    return 0;
}
