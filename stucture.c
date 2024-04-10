/*
#include<stdio.h>
struct student{
	char name[30];
	int roll;
	char subject[30];
	int grade;
};
void main(){
	struct student a;
	printf("\nEnter your name,roll_no,subject and grade: ");
	scanf("%s%d%s%d",a.name,&a.roll,a.subject,&a.grade);
	printf("Name=%s\nRoll_no=%d\nsubject=%s\ngrade=%d\n",a.name,a.roll,a.subject,a.grade);
}

#include<stdio.h>
struct student{
	char name[30];
	int roll_no;
	char subject[20];
}b[5];
void main(){
   int i;
   for(i=0;i<5;i++){
   	printf("\n%d.Enter your name,roll_no and subject: ",i+1);
   	scanf("%s%d%s",b[i].name,&b[i].roll_no,b[i].subject);
   	
//   	printf("%d.Name=%s\nroll_no=%d\nsubject=%s\n",i+1,b[i].name,b[i].roll_no,b[i].subject);
   }
   printf("%d.Name=%s\nroll_no=%d\nsubject=%s\n",1,b[0].name,b[0].roll_no,b[0].subject);
}
/*
//structure and function
#include<stdio.h>
struct teacher input();
void display(struct teacher b);
struct teacher{
	int reg_id;
	char name[30];
	float salary;
}; 
void main(){
	struct teacher a1;
	a1=input();
	display(a1);
}
struct teacher input(){
	struct teacher a;
	printf("Enter your reg_id,name and salary: ");
    scanf("%d",&a.reg_id);
   fflush(stdin);
    gets(a.name);
    //scanf("%s",a.name);
    scanf("%f",&a.salary);
    return(a);
}
void display(struct teacher b){
	printf("Register_id=%d\nName=%s\nsalary=%.2f",b.reg_id,b.name,b.salary);
}

#include<stdio.h>
struct teacher{
	int reg_no;
	char name[20];
	
};
struct date{
	int year;
	int month;
	int day;
	struct teacher a;
};
void main(){
   struct date b;
   printf("Enter your registration no and name :");
   scanf("%d%s",&b.a.reg_no,b.a.name);
    printf("Enter date of birth in YYYY MM DD Format= ");
   scanf("%d%d%d",&b.year,&b.month,&b.day);
   printf("Registration no=%d\nName=%s\nDate of Birth=%d/%d/%d",b.a.reg_no,b.a.name,b.year,b.month,b.day);
}
*/
/*
//WOP a program that takes name and marks of 10 students and Sort data according to marks in descending order and display
#include<stdio.h>
struct student{
	char name[20];
	int marks;
}s[5];
void main(){
	int i,j;
	struct student temp;
	for(i=0;i<5;i++){
		printf("%d.Enter your name and marks: ",i+1);
		scanf("%s%d",s[i].name,&s[i].marks);
	}
	for(i=0;i<5;i++){
		for(j=1+i;j<5;j++){
			if(s[i].marks<s[j].marks){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("The name and marks in decending order:\n ");
	for(i=0;i<5;i++){
		printf("Name=%s\nMarks=%d\n",s[i].name,s[i].marks);
	}
}*/
/*
//program to print the record of the employee who has maximum salary
#include<stdio.h>
struct employee{
 int empid;
 char name[20];
 float bsalary;
}e[5];
void main(){
	int n,i,max;
	printf("Enter the number of employee: ");
	scanf("%d",&n);
	printf("Enter the detail of the employee: \n");
	for(i=0;i<n;i++){
		printf("%d.Enter ID,Name and Salary:",i+1);
		scanf("%d%s%f",&e[i].empid,e[i].name,&e[i].bsalary);
	}
	max=e[0].bsalary;
	for(i=1;i<n;i++){
		if(e[i].bsalary>max){
			max=e[i].bsalary;
		}
	}
	printf("The detail of the employee who has maximum salary: \n");
	for(i=0;i<n;i++){
		if(e[i].bsalary==max){
			printf("Employee_ID:%d\nEmployee_Name:%s\nEmployee_Salary:%.2f",e[i].empid,e[i].name,e[i].bsalary);
		}
	}
}

//Nested Structure Array
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct address{
	int ph_no;
	char add[20];
	char email[20];
};
struct student{
	int roll_no;
	char name[30];
	float mark;
	struct address ad;
};
int main(){
	int n,i;
	printf("\nEnter size:");
	scanf("%d",&n);
	struct student a[n];
	for(i=0;i<n;i++){
		printf("\nEnter Roll No: ");
		scanf("%d",&a[i].roll_no);
		fflush(stdin);
		printf("\nEnter Name: ");
		gets(a[i].name);
		fflush(stdin);
		printf("\nEnter Mark: ");
		scanf("%f",&a[i].mark);
		fflush(stdin);
		printf("\nEnter Phone Number: ");
		scanf("%d",&a[i].ad.ph_no);
		fflush(stdin);
		printf("\nEnter Address: ");
		gets(a[i].ad.add);
		fflush(stdin);
		printf("\nEnter E-mail: ");
		gets(a[i].ad.email);
		fflush(stdin);	
		
	}
	for(i=0;i<n;i++){
		printf("\n%d is Roll No.",a[i].roll_no);
		printf("\n%s is Name.",a[i].name);
		printf("\n%f is Mark.",a[i].mark);
		printf("\n%d is Phone Number.",a[i].ad.ph_no);
		printf("\n%s is Address.",a[i].ad.add);
		printf("\n%s is E-mail.",a[i].ad.email);
	}
	getch();
	}


#include<stdio.h>
#include<string.h>

struct employee{
	int id;
	char name[50];
	
	
};
void main(){
	struct employee emp[5];
	int i;
	for(i=0;i<5;i++){
		printf("%d.Enter the name and id",i+1);
		scanf("%d%s",&emp[i].id,emp[i].name);
	}
	sortEmployees(emp,5);	
		for(i=0;i<5;i++){
		printf("Id:%d,Name:%s\n",emp[i].id,emp[i].name);
	
	}
}
void swap(struct employee *a,struct employee *b){
	struct employee temp=*a;
	*a=*b;
	*b= temp;
}
void sortEmployees(struct employee *emp,int n){
	int i, j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(emp[i].name,emp[j].name)>0){
				swap(&emp[i],&emp[j]);
			}
		}
	}
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Cricketer{
	char name[50];

	int wicketsTaken;
};
void main(){
	struct Cricketer crik[5];
		int i,j;
	for(i=0;i<5;i++){
		printf("%d.Enter the name,wicket:",i+1);
		scanf("%s%d",crik[i].name,&crik[i].wicketsTaken);
	}
	struct Cricketer *ptr=crik;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if((ptr+i)->wicketsTaken<(ptr+j)->wicketsTaken){
				struct Cricketer temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	printf("\nresult: ");
	for(i=0;i<5;i++){
		printf("Name:%s,wicketsTaken:%d\n",(ptr+i)->name,(ptr+i)->wicketsTaken);
	}
}
