#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	int marks;
	char grade[10];
};

void main()
{
	struct student s[100];
	int n;
	printf("\nEnter the number of students:");
	scanf("%d",&n); 
	int i;
	printf("\nEnter the student details");
	for(i=1;i<=n;i++)
	{
		printf("Student %d\n",i);
		printf("\nEnter rollno:");
		scanf("%d",&s[i].rollno);
		printf("\nEnter Name:");
		scanf("%s",s[i].name);
		printf("\nEnter the marks:");
		scanf("%d",&s[i].marks);
		printf("\nEnter grade:");
		scanf("%s",s[i].grade);
	}
	char srch[20];
	printf("\nEnter the name to search:");
	scanf("%s",srch);
	for(i=1;i<=n;i++)
	{
		if(strcmp(s[i].name,srch)==0)
		{
			printf("\nMatch found in position %d",i);
			printf("\nrollno=%d, grade=%s, marks=%d",s[i].rollno,s[i].grade,s[i].marks);
			break;
		}
	}
	printf("\nNot found");
}
	

