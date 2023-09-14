#include <iostream>
#include <string>

using namespace std;

class school {
private:
    string StudentName;
    int studentRollno;
    int studentAge;

public:
    void getStudentName(string stdName) {
        StudentName = stdName;  // No need for "this->"
    }

    void setStudentRollno(int rollno) {
        studentRollno = rollno;
    }

    void setStudentAge(int age) {
        studentAge = age;
    }

    void print() {
        cout << "Student Name: " << StudentName << endl;
        cout << "Student Rollno: " << studentRollno << endl;
        cout << "Student Age: " << studentAge << endl;
    }
};

int main() {
    school student1;
    student1.getStudentName("Aditya");
    student1.setStudentRollno(101);
    student1.setStudentAge(18);

    student1.print();

    return 0;
}

// Abstrction is just simply hiding the implementation and the complex logic from the user and making it simple
// In summary, encapsulation focuses on bundling data and methods together and controlling access,
//  while abstraction emphasizes presenting a simplified and user-friendly view of complex entities. 
//  Both concepts contribute to creating modular, maintainable, and understandable object-oriented systems.  