#pragma once

// Автор: Владислав Гурбатов Анатольевич ИВТ-20
#include <string>

// Класс Студент
class Student
{
private:			// поля класса Students
	std::string name;				
	std::string secondname;			
	std::string lastname;			
	int age;						// Возраст
	int course;						// Курс
	int	student_id;					// номер студенического билета
	std::string direction;			// направление 
	int payment;					// оплата 0 если бесплатно
	int group;						// номер группа

public:
	void set_group(int new_group);								// устанавливает группу
	void set_name(const std::string &new_name);					// устанавливает Имя
	void set_secondname(const std::string &new_secondname);		// устанавливает Отчество
	void set_lastname(const std::string &new_lastname);			// устанавливает Фамилию
	void set_direction(const std::string &new_direction);		// устанавливает направление
	void set_course(int new_course);							// устанавливает курс
	void set_payment(int new_payment);							// устанавливает оплату
	void set_age(int new_age);									// устанавливает возраст
	void set_student_id(int new_student_id);					// устанавливает номер студ. билет
	std::string get_name() const;								// возращает имя
	std::string get_secondname() const;							// возращает отчество
	std::string get_lastname() const;							// возращает фамилию
	std::string get_direction() const;							// возращает направление
	int get_course() const;										// возращает курс
	int get_payment() const;									// возращает оплату
	int get_age() const;										// возращает возраст
	int get_student_id() const;									// возращает номер студ. билет
	int get_group() const;										// возращает группу

	Student();													// конструктор по умолчанию
	Student(const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, int new_age, int new_course, int new_student_id, const std::string& new_direction, int new_payment);			// sКонструктор класса
	void set_props(const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, int new_age, int new_course, int new_student_id, const std::string& new_direction, int new_payment);			// функция установки всех значений обьекта

	std::string get_student_info() const;						// возращает информацию о студенте в виде строки
};







/*1. имя
2. описание кл
2. комменты
3. public, private
4. ввод без консили (через парам.)
5. преусловия, throw
5. констр с парам ( с вызов сеттеров )
6. * const methods
6. * const & param
7. * to_string*/