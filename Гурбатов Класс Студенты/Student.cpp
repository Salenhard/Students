#include "Student.h"
#include <iostream>

void Student::set_name(const std::string &new_name)					// устанавливает Имя
{
	if (new_name != "")
		this->name = new_name;
	else throw std::invalid_argument("Invalid argument");
}

void Student::set_secondname(const std::string &new_secondname)		// устанавливает Имя
{
	if (new_secondname != "")
		this->secondname = new_secondname;
	else throw std::invalid_argument("Invalid argument");
}

void Student::set_lastname(const std::string &new_lastname)			// Устанавливает Отчество
{
	if (new_lastname != "")
		this->lastname = new_lastname;
	else throw std::invalid_argument("Invalid argument");
}

void Student::set_direction(const std::string &new_direction)		// Устанавливает Направление
{
	if (new_direction != "")
		this->direction = new_direction;
	else throw std::invalid_argument("Invalid argument");
}

void Student::set_course(int new_course)							// Устанавливает курс
{
	if(new_course > 0 && new_course < 6)
		this->course = new_course;
	else throw std::invalid_argument("Invalid argument");
}

void Student::set_payment(int new_payment)							// Устанавливает оплату
{
	if(new_payment >= 0)
		this->payment = new_payment;
	else throw std::invalid_argument("Invalid argument");
}

void Student::set_age(int new_age)									// Устанавливает возраст
{
	if(new_age > 16)
		this->age = new_age;
	else throw std::invalid_argument("Invalid argument");
}
void Student::set_group(int new_group)								// Устанавливает группу
{
	if (new_group > 0)
		this->group = new_group;
	else throw std::invalid_argument("Invalid argument");
}

void Student::set_student_id(int new_student_id)			// Устанавливает номер студ. билета
{
	if (new_student_id > 0)
		this->student_id = new_student_id;
	else throw std::invalid_argument("Invalid argument");
}

std::string Student::get_name()	const							// Возращает имя
{
	return this->name;
}

std::string Student::get_secondname() const						// Возращает отчество
{
	return this->secondname;
}

std::string Student::get_lastname() const 						// Возращает фамилию
{
	return this->lastname;
}

std::string Student::get_direction() const 						// Возращает направление
{
	return this->direction;
}
int Student::get_group() const 									// Возращает группу
{
	return this->group;
}

int Student::get_course() const 								// Возращает курс
{
	return this->course;
}
int Student::get_payment() const 								// Возращает оплату
{
	return this->payment;
}

int Student::get_age()	 const 									// Возращает возраст
{
	return this->age;
}

int Student::get_student_id() const 						// Возращает номер студ. билета
{	
	return this->student_id;
}

Student::Student(const std::string &new_name, const std::string &new_secondname, const std::string &new_lastname, int new_age, int new_course, int new_student_id, const std::string &new_direction, int new_payment)			//Конструктор класса
{
	set_props(new_name, new_secondname, new_lastname, new_age, new_course, new_student_id, new_direction, new_payment);
}

Student::Student()												// Конструктор класса по умолчанию
{
	this->name = "Иван";
	this->secondname = "Иванович";
	this->lastname = "Иванов";
	this->course = 2;
	this->age = 18;
	this->student_id = 2221;
	this->direction = "ИВТ-20";
	this->payment = 0;
	this->group = 1;
}

std::string Student::get_student_info()	const					// возращает информацию о студенте в виде строки
{
	std::string str = "Данные о студенте:\n" +
		std::string("Имя: ") + name + "\n" +
		"Отчество: " + secondname + "\n" +
		"Фамилия: " + lastname + "\n" +
		"Возраст: " + std::to_string(age) + "\n" +
		"Курс: " + std::to_string(course) + "\n" + +
		"Номер студ. билета: " + std::to_string(student_id) + "\n" +
		"Направление: " + direction + "\n" +
		"Оплата: " + std::to_string(payment) + "\n";
	 return str;
}

void Student::set_props(const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, int new_age, int new_course, int new_student_id, const std::string& new_direction, int new_payment) // функция установки всех значений обьекта
{
	set_name(new_name);
	set_secondname(new_secondname);
	set_lastname(new_lastname);
	set_age(new_age);
	set_course(new_course);
	set_student_id(new_student_id);
	set_direction(new_direction);
	set_payment(new_payment);
}