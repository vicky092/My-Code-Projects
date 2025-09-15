#include <iostream>
using namespace std;

class Student {
public:
    string name, matric;
    float score;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter matric number: ";
        cin >> matric;
        cout << "Enter score: ";
        cin >> score;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nMatric: " << matric;
        cout << "\nScore: " << score;
        cout << "\nGrade: ";
        if (score >= 70) cout << "A";
        else if (score >= 60) cout << "B";
        else if (score >= 50) cout << "C";
        else if (score >= 45) cout << "D";
        else cout << "F";
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
