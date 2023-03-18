#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
	char name[10];
	int roll_number;
	int age;
	float total_marks;
};
int main()
{
    int n=15,count=0;
	struct Student student[n];
    for(int i=0;i<n;i++)
    {
        printf("enter roll number for student%d :",i);
        scanf("%d",&student[i].roll_number) ;
        printf("\nenter age for student%d :",i);
        scanf("%d",&student[i].age );
        printf("\nenter total marks for student%d :",i);
        scanf("%f",&student[i].total_marks );
        printf("\nenter name for student%d :",i);
        scanf("%s",&student[i].name) ;
    }

	printf("\nStudent Records:");
	printf("\n***********************\n");
	for (int i = 0; i < n; i++) {
		printf("Name = %s\n", student[i].name);
		printf("Roll Number = %d\n", student[i].roll_number);
		printf("Age = %d\n", student[i].age);
		printf("Total Marks = %0.2f\n", student[i].total_marks);
		printf("\n***********************\n");
	}
	for(int i=0;i<n;i++)
    {
        if(student[i].total_marks<12)
        {
            count++;
        }
    }
    printf("number of students with marks less than 12 : %d",count);

	return 0;
}
