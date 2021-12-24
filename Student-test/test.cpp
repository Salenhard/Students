#include "pch.h"
#include "../Гурбатов Класс Студенты/Student.h"
TEST(Student, Name) {
	Student m1;
	m1.set_name("Jon");
	EXPECT_EQ(m1.get_name(), "Jon");
}
TEST(Student, SecondName) {
	Student m1;
	m1.set_secondname("Jon");
	EXPECT_EQ(m1.get_secondname(), "Jon");
}
TEST(Student, LastName) {
	Student m1;
	m1.set_lastname("Jon");
	EXPECT_EQ(m1.get_lastname(), "Jon");
}
TEST(Student, Group) {
	Student m1;
	m1.set_group(3);
	EXPECT_EQ(m1.get_group(), 3);
}
TEST(Student, Group2) {
	Student m1;
	m1.set_group(3);
	EXPECT_EQ(m1.get_group(), 3);
}
TEST(Student, Student_id) {
	Student m1;
	m1.set_student_id(2211);
	EXPECT_EQ(m1.get_student_id(), 2211);
}
