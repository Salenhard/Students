# Класс Студент

Автор Гурбатов Владислав ИВТ-20

## Поля класса

* Имя
* Фамилия
* Отчество
* Возраст
* Номер студенческого билета
* Направление студента
* Номер группы
* Оплата обучения

## Методы

* сеттеры, геттеры
* Вывод всей информации в виде строки
* Конструктор по умолчанию
* Конструктор с параметрами

## Пример использования класса

``` c++
int main()
{
	int age;
	setlocale(0, "ru");
	Student c1;
	cout << c1.get_student_info() << endl;
	try	{
		c1.set_age(4);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	cout << c1.get_age() << endl;
	cout << "Введите возраст студента: ";
	cin >> age;
	try {
		c1.set_props("Anton", "Богданович", "Глотов", age, 3, 2232, "ИВТ-20", 0);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	cout << c1.get_student_info() << endl;
	cout << "Курс: " << c1.get_course();
}
```

## Тесты:

```C++
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
```
