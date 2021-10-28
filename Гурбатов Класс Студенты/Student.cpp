#include "Student.h"
#include <iostream>

void Student::set_name(std::string new_name)			//������������� ��� ��������
{
	if (stoi(new_name) == false || new_name != "")
		this->name = new_name;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_secondname(std::string new_secondname)		//������������� ������� ��������
{
	if (stoi(new_secondname) == false || new_secondname != "")
		this->secondname = new_secondname;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_lastname(std::string new_lastname)			//������������� �������� ��������
{
	if (stoi(new_lastname) == false || new_lastname != "")
		this->lastname = new_lastname;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_direction(std::string new_direction)			//������������� ����������� ��������
{
	if (stoi(new_direction) == false || new_direction != "")
		this->direction = new_direction;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_course(int new_course)		//������������� ���� ��������
{
	if(new_course > 0 and new_course < 6)
		this->course = new_course;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_payment(int new_payment)			//������������� ������ ��������
{
	if(new_payment >= 0)
		this->payment = new_payment;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_ages(int new_ages)			//������������� ������� ��������
{
	if(ages > 16)
		this->ages = new_ages;
	else std::cout << "�������� ������ ������" << std::endl;
}
void Student::set_group(int new_group)				//������������� ������ ��������
{
	if (new_group > 0)
		this->group = new_group;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_stud_bilet_number(int new_stud_bilet_number)			//������������� ����� ����. ������ ��������
{
	if (new_stud_bilet_number > 0)
		this->stud_bilet_number = new_stud_bilet_number;
	else std::cout << "�������� ������ ������" << std::endl;
}

std::string const Student::get_name()			//���������� ��� ��������
{
	return this->name;
}

std::string const Student::get_secondname()			//���������� ������� ��������
{
	return this->secondname;
}

std::string const Student::get_lastname()				//���������� �������� ��������
{
	return this->lastname;
}

std::string const Student::get_direction()			//���������� ����������� ��������
{
	return this->direction;
}
int const Student::get_group()				//���������� ������ ��������
{
	return this->group;
}

int const Student::get_course()				//���������� ���� ��������
{
	return this->course;
}
int const Student::get_payment()			//���������� ������ ��������
{
	return this->payment;
}

int const Student::get_ages()				//���������� ������� ��������
{
	return this->ages;
}

int const Student::get_stud_bilet_number()				//���������� ����� ����. ������ ��������
{
	return this->stud_bilet_number;
}

Student::Student(std::string name, std::string secondname, std::string lastname, int ages, int course, int stud_bilet_number, std::string direction, int payment)			//������ �����
{
	set_name(name);
	set_secondname(secondname);
	set_lastname(lastname);
	set_ages(ages);
	set_course(course);
	set_stud_bilet_number(stud_bilet_number);
	set_direction(direction);
	set_payment(payment);
}
Student::Student()				//������ ����� �� ���������
{
	this->name = "����";
	this->secondname = "��������";
	this->lastname = "������";
	this->course = 2;
	this->ages = 18;
	this->stud_bilet_number = 2221;
	this->direction = "���";
	this->payment = 0;
	this->group = 1;
}
std::string Student::get_student_info()				//������� ��� ������ � ��������� ����
{
	std::string str = "������ � ��������:\n" +
		std::string("���: ") + name + "\n" +
		"�������: " + secondname + "\n" +
		"��������: " + lastname + "\n" +
		"�������: " + std::to_string(ages) + "\n" +
		"����: " + std::to_string(course) + "\n" + +
		"����� ������������� ������: " + std::to_string(stud_bilet_number) + "\n" +
		"�����������: " + direction + "\n" +
		"������: " + std::to_string(payment) + "\n";
	 return str;
}
