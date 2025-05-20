#include <iostream>
using namespace std;
class Student {
protected:
    string names[5]; 

public:
    void setNames() {
        cout << "Enter 5 student names:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Student " << i + 1 << ": ";
            getline(cin, names[i]);
        }
    }
};
class Display : public Student {
public:
    void getNames() {
        cout << "List of Student Names:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Student " << i + 1 << ": " << names[i] << endl;
        }
    }
};

int main() {
    Display std_name;
    std_name.setNames();
    std_name.getNames();

    return 0;
}
