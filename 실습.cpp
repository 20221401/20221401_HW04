// 실습.cpp

#include<iostream>
using namespace std;

class CStudent {
private:
	string grade;

public:
	void set_grade(string grade_) {
		grade = grade_;
	}
	string get_grade() {
		return grade;
	}
};

class CProfessor {
	CStudent OStudent;
public:
	void set_student_grade(string grade_) {
		OStudent.set_grade(grade_);
	}
	void print_student_grade() {
		cout << OStudent.get_grade() << endl;
	}
};

int main() {
	CProfessor OProfessor;
	OProfessor.set_student_grade("A+");
	OProfessor.print_student_grade();

	return 0;
}