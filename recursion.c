 /*
 #include<stdio.h>
 int factorial(int number){
 	if(number==1 || number==0){
 		return 1;
	 }
	 else{
	 	return(number*factorial(number-1));
	 }
 }
 void main(){
 	int num;
 	printf("enter the number you want the factorial of\n");
 	scanf("%d",&num);
 	printf("the factorial of %d is %d\n",num,factorial(num));
 }
 */
 /*//sum of n number
#include<stdio.h>
int sum(int);
void main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("the sum is %d",sum(n));
}
int sum(int n){
	if(n==1){
		return 1;
	}
	else{
		return n+sum(n-1);
	}
}

#include<stdio.h>
#include<string.h>
void sort(char str[][20],int n);
void main(){
	char str[50][20];
	int n,i;
	printf("Enter the size of the string: ");
     scanf("%d",&n);
     for(i=0;i<n;i++){
     	printf("string-%d:",i+1);
     	scanf("%s",str[i]);
	 }
	 sort(str,n);
}
void sort(char str[][20],int n){
	int i,j;
	char temp[20];
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(str[i],str[j])>0){
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
			}	
	}
		printf("\nThe sorted strings are: ");
		for(i=0;i<n;i++){
			printf("\n%s",str[i]);
		}
}*/

#include<stdio.h>
int fib(int);
void main(){
	int i,n;
	printf("Enter the terms of fibonacci series:  ");
	scanf("%d",&n);
   for(i=1;i<=n;i++){
    printf("%d\t",fib(i)); 
}
}
int fib(int n){
	if(n==1 || n==2)
	return(1);
	else
	return(fib(n-1)+fib(n-2));
}
/*
#include<stdio.h>
void fib(int);
void main(){
	int n;
	printf("Enter the terms: ");
	scanf("%d",&n);
	fib(n);
}
void fib(int n){
	int i,a=1,b=1,c;
	for(i=1;i<=n;i++){
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}
#include<stdio.h>
int fact(int);
void main(){
	int n,b;
	printf("Enter the number: ");
	scanf("%d",&n);
	b=fact(n);
	printf("The factorial of given number is %d",b);
}
int fact(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
	   
}
#include<stdio.h>
struct student{
	int roll;
	char name[30];
	int marks;
}n[20];
void main(){
   int s,i,j;
   struct student temp;
   printf("Enter the number of student: ");
   scanf("%d",&s);
   printf("Enter the details of the student: \n");
   for(i=0;i<s;i++){
   	printf("%d.Enter roll no,name and marks: ",i+1);
   	scanf("%d%s%d",&n[i].roll,n[i].name,&n[i].marks);
   }
   for(i=0;i<s;i++){
   	for(j=i+1;j<s;j++){
   		if(n[i].roll>n[j].roll){
   			temp=n[i];
   			n[i]=n[j];
   			n[j]=temp;
		   }
	   }
   }
   printf("The results in ascending order: \n");
   for(i=0;i<s;i++){
   	printf("%d%s%d",n[i].roll,n[i].name,n[i].marks);
   }
}
*/

