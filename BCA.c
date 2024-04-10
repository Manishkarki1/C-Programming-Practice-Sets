/*
#include<stdio.h>
int main(){
	int x=3,y;
	y=(++x)+(x++);
	printf("%d",++x);
	printf("%d",x++);
	printf("%d",y);	
	return 0;
}
#include<stdio.h>
#include<math.h>
void main(){
	float x=45,r;
	r=cos(x);
	printf("%.2f",r);
}

#include<stdio.h>
void main(){
	int i=1,sum=0,even=0;
	while(i<=50){
		even=2*i;
		sum=sum+even;
		i++;
	}
	printf("The sum of even number upto 100 is %d",sum);
}

#include<stdio.h>
void main(){
	int i=1,sum=0,even=0;
	do{
		even=2*i;
		sum=sum+even;
		i++;
	}
	while(i<=50);
	printf("The sum of even number upto 100 is %d",sum);
}

#include<stdio.h>
void main(){
	int i=1;
	while(i<=100){
		printf("%d ",i);
		i++;
	}
}

#include<stdio.h>
void main(){
	int i=1;
	do{
		printf("%d ",i);
		i++;
	}
	while(i<=100);
}

//Write a program to store and display your information using goto statement code:
#include<stdio.h>

void main(){
	int age,MAX=100;
	char first[MAX],last[MAX],address[MAX];
	printf("Enter your first name:\n");
	scanf("%s",&first);
	
	printf("Enter your second name:\n");
	scanf("%s",&last);
	
	printf("Enter your age:\n");
	scanf("%d",&age);	
	
	printf("Enter your Permanent address:");
	scanf("%s",&address);
	goto result;
	result:
	printf("\n");
	printf("Full name:%s %s\n",first,last);
	printf("Age: %d\n",age);
	printf("Address: %s",address);

}

#include<stdio.h>
void main(){
	long int salary;
	float tax=0;
	printf("Enter your annual salary: ");
	scanf("%ld",&salary);
	
	if(salary<=100000){
		goto result;
	}
	else if(salary>=100000 && salary<=150000){
		tax=100000*0/100;
		tax=tax+(salary-100000)*15/100;
	}
	else{
		tax=100000*0/100;
		tax=tax+(50000)*15/100;
		tax=tax+(salary-150000)*25/100;
	}
	result:
	printf("Salary: %ld\n",salary);
	printf("Tax:%.2f\t",tax);
}
/*
#include<stdio.h>
void main(){
	int i,j,k,n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}

	for(i=n-1;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k = 1 ; k <= 2*i-1; k++){
			printf("*");
		}
		printf("\n");
	}	
}


#include<stdio.h>
void main(){
	int j,i,n;
	printf("Input upto the table number starting from 1: ");
	scanf("%d",&n);
	printf("Multiplication table from 1 to %d\n",n);
	for(i=1;i<=10;i++){
		for(j=1;j<=n;j++){
			if(j<=n-1){
				printf("\n%dx%d=%d",j,i,i*j);
			}
			else{
				printf("\n%dx%d=%d",j,i,i*j);
			}
		}
	}
}

#include<stdio.h>
int arm(int);
void main(){
	int i,k;
	for(i=1;i<=1000;i++){
		k=arm(i);
		if(k==i){
			printf("%d\t",i);
		}
	}
}
int arm(int num){
	int r, sum=0;
	while(num!=0){
		r=num%10;
		sum+=r*r*r;
		num=num/10;
	}
	return(sum);
}

#include<stdio.h>
void main(){
	FILE *name;
	name=fopen("text.txt","wb");
	fputs("Welcome to BCA program",name);
	fclose(name);
	
}

#include<stdio.h>
struct students{
	int roll;
	char name[50];
	char address[50];
	
	
};
void main(){
	struct students b[2];
	int i;
	for(i=0;i<2;i++){
		printf("Enter your roll,name,address: ");
		scanf("%d%s%s",&b[i].roll,b[i].name,b[i].address);
	}
	for(i=0;i<2;i++){
		if(b[i].roll>250){
			printf("%d%s%s",b[i].roll,b[i].name,b[i].address);
		}
	}
}

#include<stdio.h>
void main(){
	int a[3][3],b[3][3],sum[3][3];
	int i,j;
	printf("Enter the 1st matrix: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("Enter the 2nd matrix: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}

#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c,r1,r2,d;
	printf("Enter the value of a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0){
		r1=-b+sqrt(d)/(2*a);
		r2=-b-sqrt(d)/(2*a);
		printf("The real roots=%f %f",r1,r2);
		
	}
	else if(d==0){
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("Roots are equal=%f %f",r1,r2);
		
	}
	else{
		printf("Roots are imaginary");
	}

#include<stdio.h>
void main(){
	int a[5],i,j,temp;
	printf("Enter the age: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
printf("%d",a[1]);
}

#include<stdio.h>
#include<limits.h>
void main(){
	int arr[50],i,size;
	int first,second;
	printf("\n Please enter the number: ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	first=second=INT_MIN;
	for(i=0;i<size;i++){
		if(arr[i]>first){
			second=first;
			first=arr[i];
		}
			else if(arr[i]>second && arr[i]<first){
		second=arr[i];
			}
	}
	printf("\nThe largest number: %d",first);
	printf("\nThe second largest number: %d",second);
			
}

#include<stdio.h>
#include<math.h>
int fact(int);
double calculateSeriesSum(int,double);
void main(){

	int x; 
	int i,n;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the number of terms: ");
	scanf("%d",&n);

	double result=calculateSeriesSum(n,x);
	printf("\nThe sum is %f",result);
}
int fact(int x){
	if(x==1 || x==0){
		return(1);
	}
	else{
		return(x*fact(x-1));
	}
}
double calculateSeriesSum(int n,double x){
	double sum=1.0;
	int i;
	for( i=1;i<=n;++i){
		sum+=pow(x,i)/fact(i);
	}
	return sum;
}*/

//// Stack implementation using array
//#include<stdio.h>
//#include<stdlib.h>
//void push(int);
//void pop();
//void display();
//#define Max 5
//	int top=-1;
//	int stack[Max];
//void main(){
//	int i,choice,data;
//
//
//	while(1){
//	
//			printf("\nEnter 1. for push\n2. for pop\n3. To Display,\n4. To quit:");
//	scanf("%d",&choice);
//		switch(choice){
//			case 1: printf("\nEnter the data: ");
//			scanf("%d",&data);
//			push(data);
//						break;
//			case 2: pop();
//					break;
//			case 3: display();
//					break;
//			
//			case 4: end(0);
//			default:printf("Wrong choice");
//		}
//	}
//	
//	
//}
//void push(int data){
//	
//	
//	if(top==Max-1){
//		printf("\nStack overflow!");
//		return ;
//		
//	}
//	else{
//			stack[++top]=data;
//
//	}
//
//}
//void pop(){
//  if(top==-1){
//  	printf("\nStack underflow!");
//  
//  }
//  else{
//  	printf("\nthe pop number is %d",stack[top--]);
//  }
//}
//void display(){
//	int i;
//	if(top>=0){
//		printf("\nThe elements in stack is:");
//		for(i=top;i>=0;i--){
//			printf("\n%d",stack[i]);
//		}
//	}
//	else{
//		printf("\n The stack is empty");
//	}	
//}

//queue implementation using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void inqueue();
void dequeue();
void display();
int queue[MAX],rear=-1,front=0;
void main(){
	int choice;
	while(1){
			printf("\nEnter 1. for push\n2. for pop\n3. To Display,\n4. To quit:");
	scanf("%d",&choice);
	switch(choice){
		case 1:inqueue();
		break;
		case 2:dequeue();
		break;
		case 3:display();
		break;
		case 4: end(0);
		break;
		default:printf("Wrong choice");
		
	}
	}
	
}
void inqueue(){
	int n;
	if(rear==MAX-1){
		printf("\n Queue is overflow");
	}
	else{
		printf("Enter an element:");
		scanf("%d",&n);
		rear++;
		queue[rear]=n;
	}
}
void display(){
	int i;
if(front>rear){
	printf("\nQueue is empty");
}
else{
	printf("\nQueue elements: ");
	for(i=rear;i>=front;i--){
		printf("%d ",queue[i]);
	}
}
}
void dequeue(){
	int n;
	if(front>rear){
		printf("\nQueue is empty");
	}
	else{
		n=queue[front];
		front++;
		printf("Deleted element is %d",n);
		
	}
}

