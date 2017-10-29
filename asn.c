#include<stdio.h>

struct employee
{
	char ename[20];
	int empid;
	struct date
	{
		int day, month, year;	
	} date;
	struct salary
	{
		int da, hra;
	}salary;
};

int main()
{
	int i, n;
	printf("Enter the number of employees : ");
	scanf("%d", &n);
	struct employee employees[n];
	for(i=0; i<n; i++)
	{
		printf("Enter the details of Employees \n");
		printf("Enter Employee Name : ");
		scanf("%s", employees[i].ename);
		printf("Enter Employee ID : ");
		scanf("%d", &employees[i].empid);
		printf("Enter Employee Date of Joining (DD MM YY) : ");
		scanf("%d%d%d", &employees[i].date.day, &employees[i].date.month, &employees[i].date.year);
		printf("Enter Employee Salary (Basic DA) :");
		scanf("%d", &employees[i].salary.da);
		printf("Enter Employee Salary (HRA) :");
		scanf("%d", &employees[i].salary.hra);
	}

		printf("\n\n%s\n", employees[0].ename);
		printf("%d\n", employees[0].empid);
		printf("%d%d%d\n", employees[0].date.day, employees[0].date.month, employees[0].date.year);
		printf("%d\n", employees[0].salary.da);
		printf("%d\n", employees[0].salary.hra);



return 0;

}