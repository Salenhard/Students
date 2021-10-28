#pragma once
#include <string>

class Student
{
private:			//���� ������ student

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

	void set_group(int new_group);				 //������������� ������ ��������
	void set_name(std::string new_name);			//������������� ��� ��������
	void set_secondname(std::string new_secondname);		//������������� ������� ��������
	void set_lastname(std::string new_lastname);		//������������� �������� ��������
	void set_direction(std::string new_direction);		//������������� ����������� ��������
	void set_course(int new_course);				//������������� ���� ��������
	void set_payment(int new_payment);				//������������� ������ ��������
	void set_ages(int new_ages);					//������������� ������� ��������
	void set_stud_bilet_number(int new_stud_bilet_number);			//������������� ����� ����. ������ ��������

	std::string const get_name();				//���������� ��� ��������
	std::string const get_secondname();				//���������� ������� ��������
	std::string const get_lastname();				//���������� �������� ��������
	std::string const get_direction();			//���������� ����������� ��������
	int const get_course();						//���������� ���� ��������
	int const get_payment();						//���������� ������ ��������
	int const get_ages();							//���������� ������� ��������
	int const get_stud_bilet_number();				//���������� ����� ����. ������ ��������
	int const get_group();							//���������� ������ ��������


	Student(std::string name, std::string secondname, std::string lastname, int ages, int course, int stud_bilet_number, std::string direction, int payment);			//������ �����
	Student();						// ������ ����� �� ���������

	std::string get_student_info();						//������� ��� ������ � ��������� ����
};

