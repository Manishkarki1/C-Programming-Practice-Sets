/*
//with arguments and with return values
#include<stdio.h>
int sum(int a,int b);
int main(){
	int a,b,c;
	a=2;
	b=3;
    c=sum(a,b);
    printf("The sum is %d ",c);
	return 0;
}
int sum(int a, int b){
	return (a+b);
}
//with arguments and without return value
#include<stdio.h>
void printstar(int n){
	int i=0;
	while(i<n){
		printf("%c",'*');
		i++;
	}
}
void  main(){
	printstar(7);

}
//without arguments and with return value
#include<stdio.h>
int number(){
	int n;
	printf("Input the number: ");
	scanf("%d",&n);
     return n;
}
void main(){
	int c;
	c=number();
	printf("the entered number is %d",c);
}
//without argument and without return value
#include<stdio.h>
void add(void);
void main(){
	add();
}
void add(){
	int a,b,c;
	printf("enter two numbers: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("The sum is %d",c);
}

#include<stdio.h>
void multiply(int n);
void main(){
	int n;
   printf("Enter your number: ");
   scanf("%d",&n);
   multiply(n);
}
void multiply(int n){
	int i,mul;
	for(i=1;i<=10;i++){
		mul=n*i;
		printf("%d*%d=%d\n",n,i,mul);
}
}
//Takes something,Returns Nothing	
#include<stdio.h>
void add(int,int);
void main(){
	int x,y;
	printf("Input two numbers: ");
	scanf("%d%d",&x,&y);
	add(x,y);	
}
void add(int a,int b){
	int c;
	c=a+b;
	printf("Sum is %d",c);
}

//takes Nothing,Returns something
#include<stdio.h>
int add();
void main(){
	int sum;
    sum=add();
	printf("The sum is %d",sum);
}
int add(){
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	return(c);
}

#include<stdio.h>
float si(float,float,float);
void main(){
    float p,t,r;
	float i;
    printf("Enter principal,time,rate: ");
    scanf("%f%f%f",&p,&t,&r);
	i=si(p,t,r);
	printf("The simple interest is %.2f",i);
}
float si(float p,float t,float r){
	float interest;
	interest=(p*t*r)/100;
	return (interest);	
}

#include<stdio.h>
void number(int);
void main(){
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	number(n);
}
void number(int n){
	int r,s,sum=0,temp;
	temp=n;
	while(n!=0){
		r=n%10;
		s=r*r*r;
		sum=sum+s;
		n=n/10;
	}
	n=temp;
	if(sum==n){
		printf("armstrong number");
}
else{
	printf("not a armstrong number");
}
}
#include<stdio.h>
int greatestnumber(int,int,int);
void main(){
	int a,b,c,d;
	printf("Enter the numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	d=greatestnumber(a,b,c);
	printf("%d is the greatest number among %d,%d and %d",d,a,b,c);
}
int greatestnumber(int a,int b,int c){
	if(a>b && a>c){
		return a;
	}
	else if(b>a && b>c){
		return b;
	}
	else{
		return c;
	}
}

#include<stdio.h>
void prime(int);
void main(){
	int n;
	printf("enter the range to print the prime number: ");
	scanf("%d",&n);
	prime(n);
}
void prime(int n){
	int i,j;
	for(i=2;i<=n;i++){
		for(j=2;j<=i;j++){
			if(i%j==0)
			break;
		}
		if(i==j){
			printf("%d\t",i);
		}
	}
}
#include<stdio.h>
void pyramid(int);
void main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	pyramid(n);
}
void pyramid(int n){
	int i,j,k;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
}
}
/*
#include<stdio.h>
int square(int);                  //Function declaration
void main(){
	int n,c;
	printf("enter your number: ");
	scanf("%d",&n);
	c=square(n);                   //Function call
	printf("The square of %d is: %d",n,c);
}
int square(int n){                 //Function Defination
	int sq;
	sq=n*n;
	return sq;
}*/
/*
#include<stdio.h>
void swap(int,int);
void main(){
	int a,b;
	printf("Input first number: ");
	scanf("%d",&a);
	printf("Input second number: ");
	scanf("%d",&b);
	swap(a,b);
}
void swap(int x,int y){
	int c;
	c=x;
	x=y;
	y=c;
	printf("first number=%d and second number=%d",x,y);
}*/
#include<stdio.h>
int result(int);
void main(){
	int n,c;
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d",&n);
	printf("Input %d elements in the array:\n ",n);
	c=result(n);
	printf("The largest number is %d",c);
}
int result(int n){
	int i,large;
	int arr[30];
		for(i=0;i<n;i++){
		printf("element-%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	large=arr[0];
	for(i=1;i<n;i++){
		if(large<arr[i]){
			large=arr[i];
		}
	}
	return large;
}
/*
#include<stdio.h>
int checkarmstrong(int);
int checkstrong(int);
int checkperfect(int);
void main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(checkarmstrong(n)){
		printf("\nThe %d number is armstrong number",n);
	}
	else{
		printf("\nThe %d number is not a armstrong number",n);
	}
	
	if(checkstrong(n)){
		printf("\nThe %d number is strong number",n);
	}
	else{
		printf("\nThe %d number is not a strong number",n);
	}
	
	if(checkperfect(n)){
		printf("\nThe %d number is a perfect number",n);
	}
	else{
		printf("\nThe %d number is not a perfect number",n);
	}
}
int checkarmstrong(int n){
	int d,temp,sum=0,r;
	temp=n;
     while(n!=0){
     	r=n%10;
     	d=r*r*r;
     	sum=sum+d;
     	n=n/10;
	 }
	 return (temp==sum);
}
int checkstrong(int n){
	int temp,sum=0,r,fact,i;
	temp=n;
	while(n!=0){
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	return (temp==sum);
}
int checkperfect(int n){
	int i,temp,sum=0;
	temp=n;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	return (temp==sum);
}

#include<stdio.h>
#include<math.h>
int convertintodecimal(int);
void main(){
	int c,n;
	printf("Enter the binary number: ");
	scanf("%d",&n);
	c=convertintodecimal(n);
	printf("Decimal number is %d",c);
}
int convertintodecimal(int n){
	int i=0,sum=0,r;
	while(n!=0){
		r=n%10;
		sum=sum+pow(2,i)*r;
		n=n/10;
		i++;
	}
	return sum;
}*/
/*
#include<stdio.h>
void series(int);
void main(){
	int n;
	printf("Enter how many fabonacci series do you want:");
	scanf("%d",&n);
	series(n);
}
void series(int n){
	int a=1,b=1,c=0,i;
	for(i=1;i<=n;i++){
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
}*/
