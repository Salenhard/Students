#pragma once
#include <string>

class Student
{
private: //���� ������ student
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
	void set_group(int new_group); //������������� ������ ��������
	void set_name(std::string new_name); //������������� ��� ��������
	void set_secondname(std::string new_secondname);//������������� ������� ��������
	void set_lastname(std::string new_lastname);//������������� �������� ��������
	void set_direction(std::string new_direction);//������������� ����������� ��������
	void set_course(int new_course);//������������� ���� ��������
	void set_payment(int new_payment);//������������� ������ ��������
	void set_ages(int new_ages);//������������� ������� ��������
	void set_stud_bilet_number(int new_stud_bilet_number);//������������� ����� ����. ������ ��������
	std::string const get_name();//��������� ��� ��������
	std::string get_secondname();//��������� ������� ��������
	std::string get_lastname();//��������� �������� ��������
	std::string get_direction();//��������� ����������� ��������
	int get_course();//��������� ���� ��������
	int get_payment();//��������� ������ ��������
	int get_ages();//��������� ������� ��������
	int get_stud_bilet_number();//��������� ����� ����. ������ ��������
	int get_group();//��������� ������ ��������
	Student(std::string name, std::string secondname, std::string lastname, int ages, int course, int stud_bilet_number, std::string direction, int payment);//������ �����
	void get_student_info();//������� ��� ������ � ��������� ����
	Student(); // ������ ����� �� ���������
};

