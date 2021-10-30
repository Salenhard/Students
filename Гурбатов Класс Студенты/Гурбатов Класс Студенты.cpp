#include <iostream>
#include "Student.h"
#include <locale>
#include <exception>
using namespace std;
int main()
{
	int age;
	setlocale(0, "ru");
	Student c1;
	cout << c1.get_student_info() << endl;
	try	{
		c1.set_age(4);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	cout << c1.get_age() << endl;
	cout << "Введите возраст студента: ";
	cin >> age;
	try {
		c1.set_props("Anton", "Богданович", "Глотов", age, 3, 2232, "ИВТ-20", 0);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	cout << c1.get_student_info() << endl;
	cout << "Курс: " << c1.get_course();
}
