#include "Student.h"
#include <iostream>

void Student::set_name(std::string new_name) //устанавливает имя студента
{
	if (stoi(new_name) == false and new_name != "")
		name = new_name;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_secondname(std::string new_secondname)//устанавливает фамилию студента
{
	if (stoi(new_secondname) == false)
		secondname = new_secondname;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_lastname(std::string new_lastname)//устанавливает отчество студента
{
	if (stoi(new_lastname) == false)
		lastname = new_lastname;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_direction(std::string new_direction)//устанавливает направление студента
{
	if (stoi(new_direction) == false)
		direction = new_direction;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_course(int new_course)//устанавливает курс студента
{
	if(new_course > 0 and new_course < 6)
		course = new_course;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_payment(int new_payment)//устанавливает оплату студента
{
	if(new_payment >= 0)
		payment = new_payment;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_ages(int new_ages)//устанавливает возраст студента
{
	if(ages > 16)
		ages = new_ages;
	else std::cout << "Неверный формат данных" << std::endl;
}
void Student::set_group(int new_group)//устанавливает группу студента
{
	if (new_group > 0)
		group = new_group;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_stud_bilet_number(int new_stud_bilet_number)//устанавливает номер студ. билета студента
{
	if (new_stud_bilet_number > 0)
		stud_bilet_number = new_stud_bilet_number;
	else std::cout << "Неверный формат данных" << std::endl;
}

std::string const Student::get_name()//возращает имя студента
{
	return name;
}

std::string Student::get_secondname()//возращает фамилию студента
{
	return secondname;
}

std::string Student::get_lastname()//возращает отчество студента
{
	return lastname;
}

std::string Student::get_direction()//возращает направление студента
{
	return direction;
}
int Student::get_group()//возращает группу студента
{
	return group;
}

int Student::get_course()//возращает курс студента
{
	return course;
}
int Student::get_payment()//возращает оплату студента
{
	return payment;
}

int Student::get_ages()//возращает возраст студента
{
	return ages;
}

int Student::get_stud_bilet_number()//возращает номер студ. билета студента
{
	return stud_bilet_number;
}

Student::Student(std::string name, std::string secondname, std::string lastname, int ages, int course, int stud_bilet_number, std::string direction, int payment)//Создаёт класс
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
Student::Student()//Создаёт класс по умолчанию
{
	name = "Иван";
	secondname = "Иванович";
	lastname = "Иванов";
	course = 2;
	ages = 18;
	stud_bilet_number = 2221;
	direction = "ИВТ";
	payment = 0;
	group = 1;
}
void Student::get_student_info()//выводит все данные в строковом виде
{
	std::cout
		<< "Данные о студенте:" << std::endl
		<< "Имя: " << name << std::endl
		<< "Фамилия: " << secondname << std::endl
		<< "Отчество: " << lastname << std::endl
		<< "Возраст: " << ages << std::endl
		<< "Курс: " << course << std::endl
		<< "Номер студенческого билета: " << stud_bilet_number << std::endl
		<< "Направление: " << direction << std::endl
		<< "Оплата: " << payment << std::endl;
}
