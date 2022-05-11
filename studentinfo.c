#include<stdio.h>
struct student
{
	char name[50];
	int Rollno;
	int Marks;
};
int main()
{
	struct student s;
	printf("Enter Name: ");
	scanf("%s",&s.name);
	printf("Enter Rollno: ");
	scanf("%d",&s.Rollno);
	printf("Enter Marks: ");
	scanf("%d",&s.Marks);
	printf("\nDisplay Info\n");
	printf("Name: %s\n",s.name);
	printf("Rollno: %d\n",s.Rollno);
	printf("Marks: %d\n",s.Marks);
	return 0;
}
