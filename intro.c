 /*finding sum,mul,div,sub using switch case
#include<stdio.h>
#include<conio.h>
void main(){
	int fn,ln,sum,sub,mul,div,num;
	printf("Enter your first and last number:");
	scanf("%d%d",&fn,&ln);
	printf("Type 1 for sum\nType 2 for Sub\nType 3 for multiplication\nType 4 for division\n= ");
	scanf("%d",&num);
	switch(num){
		case 1:
			sum=fn+ln;
			printf("Sum is %d",sum);
			break;
		case 2:
		    sub=fn-ln;
			printf("sub is %d",sub);
			break;
		case 3:
		    mul=fn*ln;
			printf("mul is %d",mul);
			break;
		default:
		     printf("type 1,2,3 only");		
	}
	getch();
}*/

/*
//finding simple interest
 #include<stdio.h>
 #include<conio.h>
 void main(){
 	float p,t,r,SI;
 	printf("Enter principal,time,rate:");
 	scanf("%f%f%f",&p,&t,&r);
 	SI=p*t*r/100;
 	printf("simple interest is %.2f",SI);
 
 }
 */
/*finding whether which number is greatest number 
#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c,d;
	printf("Enter your number to check the greatest number: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d){
		printf("%d is greatest number\n",a);
	}
	else if(b>a && b>c && b>d){
		printf("%d is greatest number\n",b);
	}
	else if(c>b && c>a && c>d){
		printf("%d is greatest number\n",c);
	}
	else{
		printf("%d is greatest number",d);
	}
}
//To display the multiplication table of given number
#include<stdio.h>
#include<conio.h>
void main(){
	int i,num,mul;
	printf("Enter your number: ");
	scanf("%d",&num);
	for(i=1;i<=100;i++){
		mul=num*i;
		printf("%d*%d=%d\n",num,i,mul);
	}
	
	getch();
}
*/
/*Fabonacci series = 0 1 1 2 3 5 8 ......
#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,a=0,b=1,c;
	printf("Enter how many fabonacci series do you want: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		getch();
	}
	
}*/

/*
//programming to check whether the given number is armstrong number or not
#include<stdio.h>
#include<conio.h>
void main(){
	int n,r,c,sum=0,temp;
	printf("Enter the number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	} 
	n=temp;
	if(n==sum){
		printf("The given number is armstrong number");
		}
	else{
		printf("The given number is not a armstrong number");
	}
	}
*/
/*	
//232reverse number 
#include<stdio.h>
#include<conio.h>
void main(){
	int n,r,sum=0,temp;
	printf("Input the number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=temp;
	if(n==sum){
		printf("It is the palindrome number");
	}
	else{
		printf("It is not the palindrome number");
	}
	}
	
*/	
/*To check whether the number is prime number or not	
#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,count=0;
	printf("Enter your number: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("Number is prime");
 }
 else{
 	printf("Number is not a prime");
	}
}*/
/*//Drawing a pattern 
#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k;
	for(i=1; i<=5; i++){
		for(j=1; j<=5-i; j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}	
		printf("\n");
	}
	printf("   |||");

}*/
/*Another way to find prime number but it is wrong
#include<stdio.h>
#include<conio.h>
void main(){
	int n,i;
	printf("Enter your number: ");
	scanf("%d",&n);
	for(i=2; i<=n; i++){
		n%i==0;
			break;
		}
	
	if(n%i==0){
		printf("It is prime number");
	}
	else{
		printf("It is not a prime number");
	}
}*/
/*
!=0)){
		printf("It is the leap year");
	}
	else{
		printf("It is not a leap year");
	}
	getch();
}

//factorial of given number
#include<stdio.h>
void main(){
	int i,n,fact=1;
	printf("Input the number: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		fact=fact*i;
	}
	printf("The factorial of %d is %d",n,fact);
}
*/
/*sum of digits of given number
#include<stdio.h>
void main(){
	int n,sum=0,temp,r;
	printf("enter number");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	n=temp;
	printf("%d",sum);
}*/
/*
//to print the even number upto 100
#include<stdio.h>
void main(){
	int i,even,sum=0;
	for(i=1;i<=5;i++){
	    even=2*i;
	    sum=sum+even;
	}
	printf("The sum of the even number is %d",sum);
}

//to print the odd number upto 100
#include<stdio.h>
void main(){
	int i;
	for(i=0;i<=100;i++){
		i+=1;
		printf("%d\t",i);
	}
}*/
/*
#include<stdio.h>
void main(){
	int i;
	printf("the even number upto 100: ");
	for(i=1;i<=50;i++){
		printf("%d\n",2*i);
	}
}
#include<stdio.h>
void series(int n);
void main(){
	int n;
	printf("enter the number of terms to be displayed: ");
	scanf("%d",&n);
	series(n);
}
void series(int n){
	int a=1,b=1,c,i;
    for(i=1;i<=n;i++){
    	printf("%d",a);
    	c=a+b;
    	a=b;
    	b=c;
	}
}
#include<stdio.h>
int largest(int,int,int);
void main(){
	int a,b,c,n;
	printf("Enter the number: ");
	scanf("%d%d%d",&a,&b,&c);
	n=largest(a,b,c);
	printf("The largest number is %d",n);
}
int largest(int a,int b,int c){
	if(a>b && a>c){
		return a;
	}
	else if(b>c && b>a){
		return b;
	}
    else{
		return c;
	}
}

#include<stdio.h>
void main(){
	int n,i,j,k;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("The prime number upto %d is: ",n);
	for(i=2;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j){
			printf("%d\t",i);
		}
	}
}
//#include<stdio.h>
//void main(){
//	int i,fact=1,n;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	for(i=n;i>=1;i--){
//		fact=fact*i;
//		
//	}
//	printf("The factorial of %d is %d",n,fact);
//}
//WAP to find the division of the student using the else if statement
/*
#include<stdio.h>
#include<string.h>
void main(){
	char name[50];
	int c,m1,m2,e,a;
	float p;
	printf("Enter your name: ");
	gets(name);
	printf("Enter the marks of Computer: ");
	scanf("%d",&c);
	printf("Enter the marks of Math: ");
	scanf("%d",&m1);
	printf("Enter the marks of Microprocessor: ");
	scanf("%d",&m2);
	printf("Enter the marks of English: ");
	scanf("%d",&e);
	printf("Enter the marks of Account: ");
	scanf("%d",&a);
	p=(c+m1+m2+e+a)/5;
	printf("you obtained %.2f\n",p);
	if(p>=80){
		printf("%s,you get distinction\n",name);
	}
	else if(p>=70){
		printf("%s, you get first division\n",name);
	}
	else if(p>=60){
		printf("%s, you get second division\n",name);
	}
	else if(p>=50){
		printf("%s, you get third division\n",name);
	}
	else if(p>=40){
		printf("%s, Just passed\n",name);
	}
	else{
		printf("%s, failed\n",name);
	}
	
}
#include<stdio.h>
void main(){
	int i=1,sum=0;
	do{
		sum+=2*i;
		i++;
	}
	while(2*i<=100);
	printf("%d is the sum",sum);
}
#include<stdio.h>
void main(){
	int a,b,c,small;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the third number:");
	scanf("%d",&c);
	
	one:
	small=a;
	if(b<a && b<c){
		small=b;
		goto end;
	}
	else if(c<a && c<b){
		small=c;
		goto end;
	}
	goto end;
	if(a<b && a<c){
		goto one;
	}
	
	end:
	printf("The smallest number is %d",small);
		
}

#include <stdio.h>

int main() {
    int num1, num2, num3, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2 && num1 < num3) {
        smallest = num1;
    } else if (num2 < num1 && num2 < num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }

    printf("The smallest number is %d\n", smallest);

    return 0;
}

#include <stdio.h>

int main() {
    char name[100], role[100];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    goto role_input;

age_input:
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n");

    printf("Information:\n");
    printf("Name: %s\n", name);
    printf("Role: %s\n", role);
    printf("Year of Birth: %d\n", age);

    return 0;

role_input:
    printf("Enter your role: ");
    scanf("%s", role);

    goto age_input;
}
*/
#include <stdio.h>

int main() {
    int numbers[10];
    int largest, smallest,i;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    smallest = numbers[0];

    for(i = 1; i < 10; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }

        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}

