#include <iostream>
#include "Student.h"
#include <locale>
#include <exception>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	int s = 0;
	int age;
	std::vector <Student> students(20) ;
	for (Student &c: students)
		s += c.get_age();
	cout << "Сумма возрастов студентов: " << s << endl;
	Student c1;
	cout << c1.get_student_info() << endl;
	try	{
		c1.set_age(4);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	cout << "Возраст студента: " << c1.get_age() << endl;
	cout << "Введите возраст студента: ";
	//cin >> age;
	age = 20;
	try {
		c1.set_props("Anton", "Богданович", "Глотов", age, 3, 2232, "ИВТ-20", 0);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	cout << c1.get_student_info() << endl;
	cout << "Курс: " << c1.get_course() << endl;
	ofstream f;
	f.open("Студенты.txt");
	for (Student& c : students)
	{
		f << c.get_name() << endl;
		f << c.get_secondname() << endl;
		f << c.get_lastname() << endl;
		f << c.get_age() << endl;
		f << c.get_course() << endl;
		f << c.get_student_id() << endl;
		f << c.get_direction() << endl;
		f << c.get_payment() << endl;
	}
	f.close();
	ifstream d;
	d.open("Студенты.txt");
	string str;
	s = 0;
	vector<Student> studs(0);
	cout << "Вывожу из файла:" << endl;
	while (!d.eof())
	{
		s = s + 1;
		studs.resize(s);
		getline(d, str);
		if (str == "")
		{
			s = s - 1;
			studs.resize(s);
			break;
		}
		try {
			studs[s - 1].set_name(str);
		}
		catch (exception& e)
		{
			cout << e.what() << endl;
		}
		getline(d, str);
		try {
			studs[s - 1].set_secondname(str);
		}
		catch (exception& e)
		{
			cout << e.what() << endl;
		}
		getline(d, str);
		try {
			studs[s - 1].set_lastname(str);
		}
		catch (exception& e)
		{
			cout << e.what() << endl;
		}
		getline(d, str);
		try {
			studs[s - 1].set_age(stoi(str));
		}
		catch (exception& e)
		{
			cout << e.what() << endl;
		}
		getline(d, str);
		try {
			studs[s - 1].set_course(stoi(str));
		}
		catch (exception& e)
		{
			cout << e.what() << endl;
		}
		getline(d, str);
		try {
			studs[s - 1].set_student_id(stoi(str));
		}
		catch (exception& e)
		{
			cout << e.what() << endl;
		}
		getline(d, str);
		try {
			studs[s - 1].set_direction(str);
		}
		catch (exception& e)
		{
			cout << e.what() << endl;
		}
		getline(d, str);
		try {
			studs[s - 1].set_payment(stoi(str));
		}
		catch (exception& e)
		{
			cout << e.what() << endl;
		}
	}
	d.close();
	int num = 0;
	for (Student& c : studs)
	{
		num++;
	}
	cout << "Кол-во студентов в файле = " << num << endl;
}
