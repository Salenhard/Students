#pragma once
#include <string>

class Student
{
private:			//поля класса student

	std::string name;
	std::string secondname;
	std::string lastname;
	int ages;
	int course;
	int	stud_bilet_number;
	std::string direction;
	int payment;
	int group;

public:

	void set_group(int new_group);				 //устанавливает группу студента
	void set_name(std::string new_name);			//устанавливает имя студента
	void set_secondname(std::string new_secondname);		//устанавливает фамилию студента
	void set_lastname(std::string new_lastname);		//устанавливает отчество студента
	void set_direction(std::string new_direction);		//устанавливает направление студента
	void set_course(int new_course);				//устанавливает курс студента
	void set_payment(int new_payment);				//устанавливает оплату студента
	void set_ages(int new_ages);					//устанавливает возраст студента
	void set_stud_bilet_number(int new_stud_bilet_number);			//устанавливает номер студ. билета студента

	std::string const get_name();				//возвращает имя студента
	std::string const get_secondname();				//возвращает фамилию студента
	std::string const get_lastname();				//возвращает отчество студента
	std::string const get_direction();			//возвращает направление студента
	int const get_course();						//возвращает курс студента
	int const get_payment();						//возвращает оплату студента
	int const get_ages();							//возвращает возраст студента
	int const get_stud_bilet_number();				//возвращает номер студ. билета студента
	int const get_group();							//возвращает группу студента


	Student(std::string name, std::string secondname, std::string lastname, int ages, int course, int stud_bilet_number, std::string direction, int payment);			//Создаёт класс
	Student();						// создаёт класс по умолчанию

	std::string get_student_info();						//выводит все данные в строковом виде
};

