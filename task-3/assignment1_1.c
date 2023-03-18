#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
	char* name;
	int roll_number;
	int age;
	double total_marks;
};
int main()
{
	int i = 0, n = 10;
	struct Student student[n];

	student[0].roll_number = 1;
	student[0].name = "youssef";
	student[0].age = 20;
	student[0].total_marks = 30;

	student[1].roll_number = 5;
	student[1].name = "ahmed";
	student[1].age = 10;
	student[1].total_marks = 44.55;

	student[2].roll_number = 2;
	student[2].name = "mohamed";
	student[2].age = 11;
	student[2].total_marks = 99.99;

	student[3].roll_number = 4;
	student[3].name = "ali";
	student[3].age = 12;
	student[3].total_marks = 83.74;

	student[4].roll_number = 3;
	student[4].name = "sayed";
	student[4].age = 13;
	student[4].total_marks = 88.55;

	student[5].roll_number = 4;
	student[5].name = "khaled";
	student[5].age = 12;
	student[5].total_marks = 73.74;

	student[6].roll_number = 4;
	student[6].name = "ali";
	student[6].age = 12;
	student[6].total_marks = 83.74;

	student[7].roll_number = 4;
	student[7].name = "yasser";
	student[7].age = 12;
	student[7].total_marks = 83.74;

	student[8].roll_number = 6;
	student[8].name = "omar";
	student[8].age = 17;
	student[8].total_marks = 83.74;

	student[9].roll_number = 3;
	student[9].name = "hazem";
	student[9].age = 20;
	student[9].total_marks = 83.74;

	student[10].roll_number = 9;
	student[10].name = "nada";
	student[10].age = 10;
	student[10].total_marks = 83.74;

	printf("Student Records:");
	printf("\n***********************\n");
	for (i = 0; i < n; i++) {
		printf("Name = %s\n", student[i].name);
		printf("Roll Number = %d\n", student[i].roll_number);
		printf("Age = %d\n", student[i].age);
		printf("Total Marks = %0.2f\n", student[i].total_marks);
		printf("\n***********************\n");
	}

	return 0;
}
