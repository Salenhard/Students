#include "Student.h"
#include <iostream>

void Student::set_name(std::string new_name) //������������� ��� ��������
{
	if (stoi(new_name) == false and new_name != "")
		name = new_name;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_secondname(std::string new_secondname)//������������� ������� ��������
{
	if (stoi(new_secondname) == false)
		secondname = new_secondname;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_lastname(std::string new_lastname)//������������� �������� ��������
{
	if (stoi(new_lastname) == false)
		lastname = new_lastname;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_direction(std::string new_direction)//������������� ����������� ��������
{
	if (stoi(new_direction) == false)
		direction = new_direction;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_course(int new_course)//������������� ���� ��������
{
	if(new_course > 0 and new_course < 6)
		course = new_course;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_payment(int new_payment)//������������� ������ ��������
{
	if(new_payment >= 0)
		payment = new_payment;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_ages(int new_ages)//������������� ������� ��������
{
	if(ages > 16)
		ages = new_ages;
	else std::cout << "�������� ������ ������" << std::endl;
}
void Student::set_group(int new_group)//������������� ������ ��������
{
	if (new_group > 0)
		group = new_group;
	else std::cout << "�������� ������ ������" << std::endl;
}

void Student::set_stud_bilet_number(int new_stud_bilet_number)//������������� ����� ����. ������ ��������
{
	if (new_stud_bilet_number > 0)
		stud_bilet_number = new_stud_bilet_number;
	else std::cout << "�������� ������ ������" << std::endl;
}

std::string const Student::get_name()//��������� ��� ��������
{
	return name;
}

std::string Student::get_secondname()//��������� ������� ��������
{
	return secondname;
}

std::string Student::get_lastname()//��������� �������� ��������
{
	return lastname;
}

std::string Student::get_direction()//��������� ����������� ��������
{
	return direction;
}
int Student::get_group()//��������� ������ ��������
{
	return group;
}

int Student::get_course()//��������� ���� ��������
{
	return course;
}
int Student::get_payment()//��������� ������ ��������
{
	return payment;
}

int Student::get_ages()//��������� ������� ��������
{
	return ages;
}

int Student::get_stud_bilet_number()//��������� ����� ����. ������ ��������
{
	return stud_bilet_number;
}

Student::Student(std::string name, std::string secondname, std::string lastname, int ages, int course, int stud_bilet_number, std::string direction, int payment)//������ �����
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
Student::Student()//������ ����� �� ���������
{
	name = "����";
	secondname = "��������";
	lastname = "������";
	course = 2;
	ages = 18;
	stud_bilet_number = 2221;
	direction = "���";
	payment = 0;
	group = 1;
}
void Student::get_student_info()//������� ��� ������ � ��������� ����
{
	std::cout
		<< "������ � ��������:" << std::endl
		<< "���: " << name << std::endl
		<< "�������: " << secondname << std::endl
		<< "��������: " << lastname << std::endl
		<< "�������: " << ages << std::endl
		<< "����: " << course << std::endl
		<< "����� ������������� ������: " << stud_bilet_number << std::endl
		<< "�����������: " << direction << std::endl
		<< "������: " << payment << std::endl;
}
