#include "Student.h"
#include <iostream>

void Student::set_name(std::string new_name)			//устанавливает имя студента
{
	if (stoi(new_name) == false || new_name != "")
		this->name = new_name;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_secondname(std::string new_secondname)		//устанавливает фамилию студента
{
	if (stoi(new_secondname) == false || new_secondname != "")
		this->secondname = new_secondname;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_lastname(std::string new_lastname)			//устанавливает отчество студента
{
	if (stoi(new_lastname) == false || new_lastname != "")
		this->lastname = new_lastname;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_direction(std::string new_direction)			//устанавливает направление студента
{
	if (stoi(new_direction) == false || new_direction != "")
		this->direction = new_direction;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_course(int new_course)		//устанавливает курс студента
{
	if(new_course > 0 and new_course < 6)
		this->course = new_course;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_payment(int new_payment)			//устанавливает оплату студента
{
	if(new_payment >= 0)
		this->payment = new_payment;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_ages(int new_ages)			//устанавливает возраст студента
{
	if(ages > 16)
		this->ages = new_ages;
	else std::cout << "Неверный формат данных" << std::endl;
}
void Student::set_group(int new_group)				//устанавливает группу студента
{
	if (new_group > 0)
		this->group = new_group;
	else std::cout << "Неверный формат данных" << std::endl;
}

void Student::set_stud_bilet_number(int new_stud_bilet_number)			//устанавливает номер студ. билета студента
{
	if (new_stud_bilet_number > 0)
		this->stud_bilet_number = new_stud_bilet_number;
	else std::cout << "Неверный формат данных" << std::endl;
}

std::string const Student::get_name()			//возвращает имя студента
{
	return this->name;
}

std::string const Student::get_secondname()			//возвращает фамилию студента
{
	return this->secondname;
}

std::string const Student::get_lastname()				//возвращает отчество студента
{
	return this->lastname;
}

std::string const Student::get_direction()			//возвращает направление студента
{
	return this->direction;
}
int const Student::get_group()				//возвращает группу студента
{
	return this->group;
}

int const Student::get_course()				//возвращает курс студента
{
	return this->course;
}
int const Student::get_payment()			//возвращает оплату студента
{
	return this->payment;
}

int const Student::get_ages()				//возвращает возраст студента
{
	return this->ages;
}

int const Student::get_stud_bilet_number()				//возвращает номер студ. билета студента
{
	return this->stud_bilet_number;
}

Student::Student(std::string name, std::string secondname, std::string lastname, int ages, int course, int stud_bilet_number, std::string direction, int payment)			//Создаёт класс
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
Student::Student()				//Создаёт класс по умолчанию
{
	this->name = "Иван";
	this->secondname = "Иванович";
	this->lastname = "Иванов";
	this->course = 2;
	this->ages = 18;
	this->stud_bilet_number = 2221;
	this->direction = "ИВТ";
	this->payment = 0;
	this->group = 1;
}
std::string Student::get_student_info()				//выводит все данные в строковом виде
{
	std::string str = "Данные о студенте:\n" +
		std::string("Имя: ") + name + "\n" +
		"Фамилия: " + secondname + "\n" +
		"Отчество: " + lastname + "\n" +
		"Возраст: " + std::to_string(ages) + "\n" +
		"Курс: " + std::to_string(course) + "\n" + +
		"Номер студенческого билета: " + std::to_string(stud_bilet_number) + "\n" +
		"Направление: " + direction + "\n" +
		"Оплата: " + std::to_string(payment) + "\n";
	 return str;
}
