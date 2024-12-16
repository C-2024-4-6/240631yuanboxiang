//student.h              
#pragma once
class Student             
{
public:                 
	void display();
	Student();
	Student(int, const char*, char);
	void set_value(int, const char*, char);
private:
	int num;
	char name[20];
	char sex;
}; 
