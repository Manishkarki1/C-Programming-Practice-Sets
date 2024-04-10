/*#include<stdio.h>
void main(){
	int cube,i,n;
	printf("Input the number of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Number is :%d and cube of the %d is :%d",i,i,i*i*i);
		printf("\n");
	}
}

#include<stdio.h>
void main(){
   int n,i,mul;
   printf("Input number:");
   scanf("%d",&n);
   for(i=1;i<=10;i++){
   	mul=n*i;
   	printf("%d*%d=%d",n,i,mul);
   	printf("\n");
   }	
}
//sum of the even number
#include<stdio.h>
void main(){
	int n,i,sum=0;
	printf("Input the term:");
	scanf("%d",&n);
	printf("\nThe even number are: ");
	for(i=1;i<=n;i++){
		printf("%d\t",2*i);
		sum=sum+2*i;
	}
	printf("\nThe sum of even number upto %d terms: %d",n,sum);
}

#include<stdio.h>
void main(){
	int i,j,k=1;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d",k++);
		}
		printf("\n");
	}
}
*/
/* To print 
   1
  2 3
 4 5 6
7 8 9 10
#include<stdio.h>
void main(){
	int rows,i,j,k,l=1;
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(k=i;k<=5;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d ",l++);
		}
		printf("\n");
	}
}

#include<stdio.h>
void main(){
	int rows,i,j,k,l=1;
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(k=1;k<=rows-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf(" *");
		}
		printf("\n");
	}
}

#include<stdio.h>
void main(){
	int fact=1,n,i;
	printf("Input the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("The factorial of %d is: %d",n,fact);
}
#include<stdio.h>
void main(){
	int i,j,k;
	for(i=1;i<=4;i++){
		for(k=1;k<=4-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
 }
}
#include<stdio.h>
void main(){
	int n,i;
	float s=0.0;
	printf("Input the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i<n){
		printf("1/%d + ",i);
		s+=1/(float)i;
	}
	if(i==n){
		printf("1/%d",i);
		s+=1/(float)i;
	}
	}
	printf("\nSum of series upto %d terms: %f",n,s);
	}
#include<stdio.h>
void main(){
	int n,i,k=9,s=0;
	printf("Input the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		    s=s+k;
			k=k*10+9;
			printf("%d  ",k);
		}
		printf("\n The sum is %d",s);
	}
//To check whether the number is perfect number or not
#include<stdio.h>
void main(){
	int n,i,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(n==sum){
		printf("perfect number");
	}
	else{
		printf("not a perfect number");
	}
}
#include<stdio.h>
void main(){
	int i=1,n=5,fact=1;
	while(i<=n){
	   fact=fact*i;
	   i++;
	}
	printf("%d",fact);
}
#include<stdio.h>
void main(){
	int n,i,r,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n!=0){
	
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("the sum of the given number is %d",sum);
}
// printing strong number in the given range
#include<stdio.h>
void main(){
	 int n,i,sum=0,fact,r,temp;
	 printf("Enter the n: ");
	 scanf("%d",&n);
	 temp=n;
	 while(n>0){
	 	r=n%10;
	 	fact=1;
	 	for(i=1;i<=r;i++){
	 		fact=fact*i;
		 }
		 sum=sum+fact;
		 n=n/10;
	 }
	 n=temp;
	 if(n==sum)
	 printf("strong number");
	 else
	 printf("not a strong number");
}*/
/*
#include<stdio.h>
void main(){
	int n,r,sum=0;
	printf("Input the number: ");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("the reverse number is %d",sum);
}
*/
#include<stdio.h>
void main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(k=1;k<=5-i;k++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
		for(i=4;i>=1;i--){
		for(k=1;k<=5-i;k++){
			printf(" ");
		}
		for(j=2*i-1;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
}
/*
#include<stdio.h>
void main(){
	int i,num[5],large;
	printf("Enter four number: ");
	scanf("%d%d%d%d",&num[0],&num[1],&num[2],&num[3]);
	large=num[0];
	for(i=1;i<=5;i++){
		if(num[i]>large)
		large=num[i];
	}
	printf("%d is the greatest number",large);
}
#include<stdio.h>
void main(){
	int n,i,sum=0;
	printf("enter your number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(n==sum){
		printf("%d is perfect number",n);
	}
	else{
		printf("%d is not a perfect number",n);
	}
}

//break and continue statement is only use in loop and switch case
#include<stdio.h>
void main(){
	int i,age,j;
	for(i=1;i<10;i++){
		
		printf("Enter your age: ");
		scanf("%d",&age);
		if(age<30){
			continue;
		}
		printf("sorry");
		}
	
}
#include<stdio.h>
//typecasting syntax
//(datatype) value;
void main(){
	float a=40;
	int b=40;
	float c=(float)42/5;
	printf("the value of a is %d\n",(int) a);
	printf("the value of b is %f\n",(float) b);
	printf("the value of a is %f", c);
}*/

