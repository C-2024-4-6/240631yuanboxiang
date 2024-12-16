	#include <iostream>
	using namespace std;
	class Student
	{
	public:
		int num;
		int grade;
		void input()
		{
			cout << "input your num and grade pls." << endl;
			cin >> num >> grade;
		}
	};
	int max(Student*);
	int main()
	{
		int i;
		Student stu[5];
		for (i = 0; i < 5; i++)
		{
			stu[i].input();
		}
		cout<<max(stu);
		return 0;
	}
	int max(Student* stu)
	{
		int i;
		for (i = 0;i<5;i++)
		{
			for (int k = 0; k < 5; k++)
			{
				if (stu[k].grade < stu[k + 1].grade)
				{
					stu[k].grade = stu[k + 1].grade;
					stu[k].num = stu[k+1].num;
				}
			}
		}
		return stu[0].num;
	}